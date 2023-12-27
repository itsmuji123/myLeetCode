class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int a = prices[0];
        int b = prices[1];
        
        if ((money - a) < 0){
            return money;
        }else{
            if(money-(a + b) < 0){
                return money;
            }
            else{
                return money-(a + b);
            }
        }
        return 0;
    }
};