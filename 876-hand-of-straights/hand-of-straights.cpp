class Solution {
public:
bool possibility_to_arrange(vector<int>& hand,int groupSize,int i,int n){
    int next=hand[i]+1;
    hand[i]=-1;
    int cnt=1;
    i+=1;
    while(cnt<groupSize && i<n){
        if(hand[i]==next){
            next=hand[i]+1;
            hand[i]=-1;
            cnt++;
        }
        i++;
    }
    return cnt==groupSize;
}
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n=hand.size();
        if(n%groupSize!=0) return false; 
        sort(begin(hand),end(hand));
        for(int i=0;i<n;i++){
            if(hand[i]>=0){
                if(!possibility_to_arrange(hand,groupSize,i,n)) return false;
            }
        }
        return true;
    }
};