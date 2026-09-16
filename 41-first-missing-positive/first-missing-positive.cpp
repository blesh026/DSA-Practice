class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]>0 && nums[i]<=n){
            int current = nums[i]-1;
            if(nums[i]!=nums[current]){
                swap(nums[i],nums[current]);
            }
            else{ i++;
                    }        }
        else{ i++;}
    }
        for(int x=0;x<n;x++){
            if(nums[x]!=x+1){
                return x+1;

            }


        }
        return n+1;
    }
};