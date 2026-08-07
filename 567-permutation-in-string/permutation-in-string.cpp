class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        unordered_map<char,int> maap;
         int k=s1.size();
        for(int i : s1){
            mp[i]++;
        }
        int n=s2.size();
        if (k > n)
            return false;

        int left=0;
        for(int i=0;i<k;i++){
            maap[s2[i]]++;
        }
        if(mp==maap){
            return true;
        }
        for(int i=k;i<n;i++){
            maap[s2[i]]++;
            maap[s2[left]]--;
        
       if(maap[s2[left]]==0)maap.erase(s2[left]);
       left++;
       if(mp==maap)return true;
       }
    return false; }
};