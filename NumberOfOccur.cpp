//Coding Ninja
int first_occ(vector<int>& arr, int n, int key){
        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=(start+(end-start)/2);
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            else if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            mid=(start+(end-start)/2);

        }
        return ans;
    }
 int last_occ(vector<int>& arr, int n, int key){
        int start=0;
        int end=n-1;
        int ans=-1;
        int mid=(start+(end-start)/2);
        while(start<=end){
            if(arr[mid]==key){
                ans=mid;
                start=mid+1;
            }
            else if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }

            mid=(start+(end-start)/2);

        }
        return ans;
    }
int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here
	int first= first_occ(arr,n,x);
	int last= last_occ(arr,n,x);
	if(first==-1 && last==-1)return 0;
	return last-first+1;

}
