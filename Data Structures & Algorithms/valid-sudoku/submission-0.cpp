class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = 9;
        int n = 9;

        for(int i=0;i<m;i++) {
            vector<int> a(10);
            for (int j=0;j<n;j++) {
                if (board[i][j] != '.') {
                    if (a[board[i][j]-'0'-1] == 0) {
                        a[board[i][j]-'0'-1] = 1;
                    } else {
                        return false;
                    }
                }
            }
        }

        for(int j=0;j<n;j++) {
            vector<int> a(10);
            for (int i=0;i<m;i++) {
                if (board[i][j] != '.') {
                    if (a[board[i][j]-'0'-1] == 0) {
                        a[board[i][j]-'0'-1] = 1;
                    } else {
                        return false;
                    }
                }
            }
        }

        int i=0;
        int j=0;
        int ir=3;
        int jr=3;
        while(jr<=9) {
            ir=3;
            i=0;
            while(ir<=9) {
                vector<int> a(10);
                for(int x=i;x<ir;x++) {
                    for(int y=j;y<jr;y++) {
                        if (board[x][y] != '.') {
                            if (a[board[x][y]-'0'-1] == 0) {
                                a[board[x][y]-'0'-1] = 1;
                            } else {
                                return false;
                            }
                        }
                    }
                }
                i+=3;
                ir+=3;
            }
            jr+=3;
            j+=3;
        }
        return true;
    }
};
