class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int i: prices){
            if (i < min1){
                min2 = min1;
                min1 = i;
            } 
            else if (i < min2){
                min2 = i;
            }
        }
        int cost = min1 + min2;

        if (cost <= money){
            return money - cost;
        }
        
            return money;
        
    }
};