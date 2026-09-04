class Solution {
public:
int pivotelement(vector<int>& nums){
    int n=nums.size();
    int start =0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;

        if(mid<end && nums[mid]>nums[mid+1]){return mid;}
        if(mid>start && nums[mid]<nums[mid-1]){return mid-1;}
        else if(nums[start]>=nums[mid]){end=mid-1;}
        else {start=mid+1;}
    }
    return -1;
}
    int findMin(vector<int>& nums) {
        int n =nums.size();
       int  pivot=pivotelement(nums);
       if(pivot ==-1){
        return nums[0];
       }else return nums[pivot+1];
    }
};