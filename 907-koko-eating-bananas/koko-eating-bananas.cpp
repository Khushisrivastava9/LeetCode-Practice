class Solution {
public:
int n;
long int fn(int hourly,vector<int>& piles){
    long int totalhrs=0;
    for(int i=0;i<n;i++){
        totalhrs+=ceil((double)piles[i]/(double)hourly);
    }
    return  totalhrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        n=piles.size();
        int maxele=*max_element(piles.begin(),piles.end());
        int s=1;
        int e=maxele;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            long int reqtime=fn(mid,piles);
            if(reqtime<=h){
                e=mid-1;
                ans=mid;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};