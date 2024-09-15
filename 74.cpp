class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r1=0;
        int r2=matrix.size()-1;
        while(r1<r2){
            int mid=r1+(r2-r1)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            if(matrix[mid][0] < target && target < matrix[mid+1][0]){
                r1=mid;
                break;
            }
            if(matrix[mid][0] < target){
                r1=mid+1;
            }else{
                r2=mid-1;
            }
        }
        
        int c1=0;
        int c2=matrix[0].size()-1;
        while(c1<=c2){
            int m=c1+(c2-c1)/2;
            if(matrix[r1][m]==target){
                return true;
            }
            if(matrix[r1][m]<target){
                c1=m+1;
            }else{
                c2=m-1;
            }
        }
        return false;
    }
};