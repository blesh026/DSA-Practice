class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n= nums.size();
        int i=0;
        while(i<n){
            int correct= nums[i]-1;
             if(nums[i]!=nums[correct]){
                swap(nums[i],nums[correct]);
             }else i++;
}   vector<int> ans; 
for(int j=0;j<n;j++){
    if(nums[j]!= j+1){
        ans.push_back(j+1);
    }

}

  return ans;  }
};