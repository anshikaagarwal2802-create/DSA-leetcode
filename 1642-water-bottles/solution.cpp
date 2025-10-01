class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
    
        int totaldrunk=numBottles;
        int emptybottles=numBottles;
        while(emptybottles>=numExchange)
        {
            int newbottles=(emptybottles/numExchange);
            totaldrunk+=newbottles;
            int remainingempties=emptybottles%numExchange;
            emptybottles = newbottles + remainingempties;

        }
        return totaldrunk;
        
    }
};
