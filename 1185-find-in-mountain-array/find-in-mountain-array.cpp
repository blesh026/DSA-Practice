/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
       int findPeakElement(MountainArray &nums) {
        int n=nums.length();
        int low=0;
        int high= n-1;
        while(low<high){
            int mid= (low+high)/2;
            if(nums.get(mid)>nums.get(mid+1)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
     return low;   
    }
    int search(int target, MountainArray &nums,int start,int end,bool increasing){

        while (start<=end){
            int mid=(start+end)/2;

            if(nums.get(mid)==target)return mid;
            if(increasing) {
                if(nums.get(mid) < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else {
                if(nums.get(mid) < target)
                    end = mid - 1;
                else
                    start = mid + 1;


        }}
        return -1;

    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n= mountainArr.length();
       int peak= findPeakElement(mountainArr);
       int start=0;
       int end=n-1; 
       int ans= search(target,mountainArr,start,peak,true);
        if(ans==-1){
            ans=search(target,mountainArr,peak+1,end,false);

        }
    return ans;}
};