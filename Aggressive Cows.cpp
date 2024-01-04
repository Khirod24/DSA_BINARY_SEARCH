//AGGRESSIVE COWS(LEETCODE AND GFG)
bool canWePlace(vector<int>&stalls, int distance, int cows){
    int countCows=1;
    int lastCow=stalls[0];
    for(int i=1; i<stalls.size();i++){
        if(stalls[i]-lastCow>=distance){
            countCows++;
            lastCow=stalls[i];
        }
        if(countCows>=cows)return true;
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int n= stalls.size();
    sort(stalls.begin(),stalls.end());
    int low=1, high= stalls[n-1]-stalls[0];
    while(low<=high){
        int mid= (high-low)/2+low;
        if(canWePlace(stalls,mid,k)==true){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
