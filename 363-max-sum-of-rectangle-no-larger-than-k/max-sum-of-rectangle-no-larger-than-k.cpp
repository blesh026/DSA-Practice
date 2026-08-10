class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int row=matrix.size();
        int column=matrix[0].size();
        int max_sum=INT_MIN;
        int sum=0;
       vector<vector<int>> prefix_sum(row+1,vector<int>(column+1));
       for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            prefix_sum[i+1][j+1]=matrix[i][j]+prefix_sum[i][j+1]+prefix_sum[i+1][j]-prefix_sum[i][j];
            }
        
       }

       for(int top = 0; top < row; top++) {

            for(int bottom = top; bottom < row; bottom++) {

                for(int left = 0; left < column; left++) {

                    for(int right = left; right < column; right++) {

                        int sum =prefix_sum[bottom + 1][right + 1]- prefix_sum[top][right + 1]- prefix_sum[bottom +1][left]+ prefix_sum[top][left];  
           if(sum<=k){
                max_sum=max(sum,max_sum);
           }
      }}}}


  return max_sum;
    }
};