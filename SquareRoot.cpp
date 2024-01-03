//LEETCODE(69)
int mySqrt(int x) {
        int low=0, high=x, ans=1;
        while(low<=high){
            long long mid=(high-low)/2+low;
            long long y=mid*mid;
            if(y<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
        // return ans;
    }
