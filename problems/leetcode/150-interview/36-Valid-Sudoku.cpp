class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                //loop over row
                for(int k=0;k<9;k++){
                    if(board[i][j]==board[i][k]&&board[i][k]!='.'){
                        if(k!=j) return false;
                    }
                }

                //loop over col
                for(int k=0;k<9;k++){
                    if(board[i][j]==board[k][j]&&board[k][j]!='.'){
                        if(k!=i) return false;
                    }
                }
                
                int colCell=i/3;
                colCell*=3;
                int rowCell=j/3;
                rowCell*=3;
                for(int k=colCell;k<colCell+3;k++){
                    for(int l=rowCell;l<rowCell+3;l++){
                        if(board[i][j]==board[k][l]&&board[k][l]!='.'){
                            if(k!=i&&j!=l) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};