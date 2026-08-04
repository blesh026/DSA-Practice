class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int high=n-1;
        int len =0;int base=0;int area=0;
        int low=0;
        while(low<high){
           len=min(height[low],height[high]);
            base= high-low;
            area= max((len*base),area);
            if(height[low]>=height[high])high--;
            else low++;



        }
        return area;
    }
};