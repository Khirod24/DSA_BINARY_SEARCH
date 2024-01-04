//LEETCODE(410) AND CODING NINJA
int countStudents(vector<int>&arr,int n, int pages){
    int students=1;
    long long pageStudents=0;
    for(int i=0;i<n;i++){
        if(pageStudents+arr[i]<=pages){
            pageStudents+=arr[i];
        }
        else{
            students++;
            pageStudents=arr[i];
        }
    }
    return students;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n)return -1;
    int low= *max_element(arr.begin(),arr.end());//max(arr)
    int high= accumulate(arr.begin(), arr.end(),0);//sum(arr)
    while(low<=high){
        int mid= (high-low)/2+low;
        int students= countStudents(arr,n,mid);
        if(students>m){
            low=mid+1;
        }
        else{
            high= mid-1;
        }
    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
        
    }
