class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int m=nums2.size();

        vector<int>result;
        result.reserve(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),back_inserter(result)); 
        int x=result.size();
        int low=0;
        int high=x-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(x%2!=0){
                return result[mid];
                
            }else if(x%2==0 && mid<=high){
                 double t = (result[mid]+result[mid+1])/2.0;
            
                return t;}
               


        }

   return -1; }
};