class Solution {
public:
    int  pivotelementduplicate(vector<int>& nums){
       int n = nums.size();
       int start=0;
       int end= n-1;
       while(start<=end){
        int mid=(start+end)/2;

          if(mid<end && nums[mid]>nums[mid+1]){return mid;}
        if(mid>start && nums[mid]<nums[mid-1]){return mid-1;}

        if(nums[start]==nums[mid] && nums[end]==nums[mid]){
            if(start<end && nums[start]>nums[start+1])return start;
            
            start++;
            if(end>start && nums[end]<nums[end-1])return end-1;

            end--;
        }
        else if(nums[start]<nums[mid] ||(nums[start]==nums[mid] && nums[mid]>nums[end])){
            start=mid+1;
        }
        else end=mid-1;
       } 
       return-1;

    }
    int findMin(vector<int>& nums) {
       int n=nums.size();
       int pivot =pivotelementduplicate(nums);
       if(pivot==-1){
        return nums[0];
       } return nums[pivot+1];
    }
};