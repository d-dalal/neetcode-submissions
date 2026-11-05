class NumMatrix {
public:
    vector<vector<int>> sum;

    NumMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> colSum = matrix;

        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(j>=1) {
                    colSum[i][j] += colSum[i][j-1];
                }
            }
        }
        sum = colSum;

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i>=1) {
                    sum[i][j] += sum[i-1][j];
                }
            }
        }
        // for(int i=0;i<m;i++) {
        //     for(int j=0;j<n;j++) {
        //         cout << matrix[i][j] << " ";
        //     }
        //     cout << "\n";
        // }

        // cout << "\n--------------\n";
        // for(int i=0;i<m;i++) {
        //     for(int j=0;j<n;j++) {
        //         cout << sum[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if (row1 > 0 && col1 > 0) {
            return sum[row2][col2] - sum[row2][col1-1] - sum[row1-1][col2] + sum[row1-1][col1-1];
        } else if (row1 == 0 && col1 != 0) {
            return sum[row2][col2] - sum[row2][col1-1];
        } else if (row1 != 0 && col1 == 0) {
            return sum[row2][col2] - sum[row1-1][col2]; 
        } else {
            return sum[row2][col2];
        }
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */