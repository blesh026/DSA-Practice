class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
    vector<int> prefix;
    prefix.resize(n+1);

    for(int i=0;i<n;i++){
        prefix[i+1]=prefix[i]+nums[i];
    }

    for(int j=0;j<n;j++){
        if(prefix[j]==(prefix[n]-prefix[j+1])){
            return j;
       }
            

    }

    return -1;    
    }
};