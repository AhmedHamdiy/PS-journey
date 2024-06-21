class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      
       int count=0, m=matrix.size(),n=matrix[0].size(),total=m*n;  
       int lBound=0, rBound=n-1, uBound=0, dBound=m-1;
       vector<int> v;
       while(count<total){
                 for(int i=lBound;i<=rBound && count<total;i++){
                    v.push_back(matrix[uBound][i]);
                    count++;
                 }
                 uBound++;

                  for(int i=uBound ;i<=dBound && count<total;i++){
                     v.push_back(matrix[i][rBound]);
                     count++;
                  }
                  rBound--;

                   for(int i=rBound;i>=lBound && count<total;i--){
                    v.push_back(matrix[dBound][i]);
                    count++;
                 }
                 dBound--;

                  for(int i=dBound;i>=uBound && count<total;i--){
                    v.push_back(matrix[i][lBound]);
                    count++;
                 }
                 lBound++;
       }
       return v;
    }
};