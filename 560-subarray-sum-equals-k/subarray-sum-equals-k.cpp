class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       int n=nums.size();
       int csum=0;
       
       int totalcount=0;

       mp[0]=1;
       for(int i=0 ;i<n;i++){
         csum= csum+nums[i];
        int ksum=csum-k;
        if(mp.find(ksum)!=mp.end()){
            totalcount+=mp[ksum];
            
        }
        mp[csum]++;
       
        
        } 
       return totalcount;
    }
};