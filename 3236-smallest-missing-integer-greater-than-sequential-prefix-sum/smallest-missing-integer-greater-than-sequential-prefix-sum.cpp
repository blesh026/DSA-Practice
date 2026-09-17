class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        int sum=nums[0];

        while(i<n){
            if(nums[i]==nums[i-1]+1){
                sum=sum+nums[i];
                i++;
            }
            else break;
        }

         while(find(nums.begin(), nums.end(), sum) != nums.end()){
            sum++;
        }

        return sum;
    }
    
};