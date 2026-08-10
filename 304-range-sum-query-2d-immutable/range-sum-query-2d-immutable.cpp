class NumMatrix {
public:
vector<vector<int>>presum_matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column= matrix[0].size();
        presum_matrix.resize(row+1);
        for(int i=0;i<row+1;i++){
            presum_matrix[i].resize(column+1);
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                 presum_matrix[i+1][j+1]= matrix[i][j]+presum_matrix[i][j+1]+presum_matrix[i+1][j]-presum_matrix[i][j];
            }
        }
        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       return presum_matrix[row2+1][col2+1]-presum_matrix[row1][col2+1]-presum_matrix[row2+1][col1]+presum_matrix[row1][col1];
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */