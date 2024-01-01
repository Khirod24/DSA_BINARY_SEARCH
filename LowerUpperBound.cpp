//IMPLEMENT LOWER AND UPPER BOUND
//LOWER BOUND
int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int low=0, high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(high-low)/2+low;
		if(arr[mid]>=x){
			ans=min(ans,mid);
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}

//UPPER BOUND
int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
	int low=0, high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(high-low)/2+low;
		if(arr[mid]>x){
			ans=min(ans,mid);
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
	
}
