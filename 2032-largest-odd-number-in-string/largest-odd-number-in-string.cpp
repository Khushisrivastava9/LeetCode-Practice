class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n=num.size();
        int a=0;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                a=i+1;
                break;
            }
        }
        ans.append(num.begin(),num.begin()+a);
        return ans;

    }
};