//LEETCODE(34)
//solution 1
vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        int first=-1, last=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                if(first==-1){
                    first=i;
                }
                last=i;
            }
        }
        return {first,last};
    }

//solution 2
//Coding Ninja
#include <bits/stdc++.h> 
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
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
   pair<int, int>p;
   p.first=first_occ(arr, n,  k);
   p.second=last_occ(arr, n,  k);
   return p;

    
}
