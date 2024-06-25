int dx[8]={0,0,-1,1,-1,-1,1,1};
int dy[8]={1,-1,0,0,1,-1,1,-1};
class Solution {
public:
    void gameOfLife(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size(),ct=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<8;k++){
                    int nx=dx[k]+i,ny=dy[k]+j;
                    if(nx>=0 && nx<m && ny>=0 && ny<n){
                        if(mat[nx][ny]==1 || mat[nx][ny]==-1){
                            ct++;
                        }
                    }
                }
                if(mat[i][j]==1 && (ct<2 || ct>3)){
                    mat[i][j]=-1;
                }
                else if(mat[i][j]==0 && (ct==3)){
                    mat[i][j]=2;
                }
                ct=0;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==-1){
                    mat[i][j]=0;
                }
                else if(mat[i][j]==2){
                    mat[i][j]=1;
                }
            }
        }
    }
};