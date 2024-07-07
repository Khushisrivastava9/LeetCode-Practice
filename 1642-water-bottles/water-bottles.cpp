class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bottleconsumed=0;
        while(numBottles>=numExchange){
            bottleconsumed+=numExchange;
            numBottles-=numExchange;
            numBottles+=1;
        }
        return bottleconsumed+numBottles;
    }
};