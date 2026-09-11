class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int end= x;
        while(low<=end){
               long long mid = low + (end - low) / 2;

            if(mid*mid<=x){
                low=mid+1;}

            else end=mid-1;

        }
        return end;
    }
};