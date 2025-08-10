class Solution {
public:
string getsortedstr(int n){
    string s=to_string(n);
    sort(s.begin(),s.end());
    return s;
}
   bool reorderedPowerOf2(int n) {
        string s=getsortedstr(n);
        for(int i=0;i<=29;i++){
            //1<<i will give powers of 2 starting from 0..it will be 1<<0=1=2^0, 1<<1=10=2^1 ,1<<2=100=2^2...
            if(s==getsortedstr(1<<i)) return true;
        }
        return false;
    }
};