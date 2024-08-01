class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt=0;
        for(auto i:details){
            int age=0;
            int fdigit=i[11]-'0';
            age=age*10+fdigit;
            int sdigit=i[12]-'0';
            age=age*10+sdigit;
            if(age>60) cnt++;
        }
        return cnt;
    }
};