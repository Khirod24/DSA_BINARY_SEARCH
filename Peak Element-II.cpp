//LEETCODE(1901) AND CODING NINJA
int findMax(vector<vector<int>>&g, int rows, int col){
    int maxIndex=-1;
    int maxValue=-1;
    for(int i=0; i<rows; i++){
        if(g[i][col]>maxValue){
            maxValue=g[i][col];
            maxIndex=i;
        }
    }
    return maxIndex;
}
vector<int> findPeakGrid(vector<vector<int>> &g){
    int n= g.size();
    int m= g[0].size();
    int low=0;
    int high= m-1;
    while(low<=high){
        int mid= (high-low)/2+low;
        int maxIndex=findMax(g,n,mid);
        int left= mid-1>=0?g[maxIndex][mid-1]:-1;
        int right= mid+1<m?g[maxIndex][mid+1]:-1;

        if(g[maxIndex][mid]>left && g[maxIndex][mid]>right){
            return {maxIndex,mid};
        }
        else if(g[maxIndex][mid]<left){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }    
    return {-1,-1};
}
