//LEETCODE(704)
int binarySearch(vector<int>&nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=(high-low)/2+low;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
           return binarySearch(nums,low,mid-1,target);
        }
        else{
            return binarySearch(nums,mid+1,high,target);
        }
       }
    int search(vector<int>& nums, int target) {
        int x=binarySearch(nums,0,nums.size()-1,target);
        return x;
    }
