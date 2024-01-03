//GFG and CodingNinja
	int pow(int x,int k,int m){
	    long long ans=1;
	    for(int i=1;i<=k;i++){
	        ans=ans*x;
	        if(ans>m)return 2;
	    }
	    if(ans==m)return 1;
	    return 0;
	}
	int NthRoot(int n, int m)
	{
	    int low=1, high=m, ans=1;
        while(low<=high){
            long long mid=(high-low)/2+low;
            long long y=pow(mid,n,m);
            if(y==1){
                return mid;
            }
            if(y==0)low=mid+1;
            else{
                high=mid-1;
            }
        }
        return -1;
	}
