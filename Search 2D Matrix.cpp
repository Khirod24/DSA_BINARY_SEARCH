//LEETCODE(74) & CN
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m= mat.size();
    int n= mat[0].size();
    int low=0, high= (m*n)-1;
    while(low<=high){
        int mid= (high-low)/2+low;
        int row= mid/n;
        int col= mid%n;
        if(mat[row][col]==target){
            return true;
        }
        else if(mat[row][col]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}
