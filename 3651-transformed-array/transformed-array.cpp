class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n =nums.size();
        vector<int> result(n);

            for(int j=0;j<n;j++){
            int index= ((j + nums[j]) % n + n) % n;
            result[j]=nums[index];}

   return result; }
};