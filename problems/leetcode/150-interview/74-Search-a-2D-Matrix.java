class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int n = matrix.length;
        int m = matrix[0].length;
        int st=0;
        int nd =n*m-1;
         while(st <= nd){
            int mid = st + (nd - st)/2;
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            else if(matrix[mid/m][mid%m] < target){
                st = mid + 1;
            }
            else{
                nd = mid - 1;
            }
        }
        return false;
    }
}