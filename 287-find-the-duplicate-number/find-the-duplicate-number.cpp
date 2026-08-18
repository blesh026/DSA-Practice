class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correct= nums[i]-1;
            if(nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
            }else i++;
        }
        for(int j=0;j<n;j++){
            if(nums[j]!=j+1){
                return nums[j];
            }
        }
        
   return n; }
};