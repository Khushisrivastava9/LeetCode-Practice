class Solution {
public:
double solve(long long nn,double x,double ans){
    if(nn<=0) return ans;
    if(nn%2==1) return solve(nn-1,x,ans*x);
    else return solve(nn/2,x*x,ans);
}
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        if(n<0) nn=-nn;
        double res=solve(nn,x,ans);
        // while (nn > 0) {
        //     if (nn % 2 == 1) {
        //         ans *= x;
        //         nn--;
        //     } else {
        //         x *= x;
        //         nn /= 2;
        //     }
        // }
        if(n<0) res=1.0/res;
        return res;
    }
};