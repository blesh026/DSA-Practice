class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correct = nums[i];
            if(nums[i]<n && nums[i]!= nums[correct]){
                swap(nums[i],nums[correct]);
            }else i++;
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j)return j;
        }
        
        return n;
    }
};