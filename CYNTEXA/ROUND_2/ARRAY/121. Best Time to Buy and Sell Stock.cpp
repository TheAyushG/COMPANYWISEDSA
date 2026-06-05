----------------------------------------
Time Complexity  - O(n)
Space Complexity - O(1)
----------------------------------------

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int buy_price = prices[0];
        int maxProfit = 0;

        for(int i=1; i<n; i++){
            if(buy_price > prices[i]){
                buy_price = prices[i];
            }

            else {
                maxProfit = max(maxProfit, prices[i] - buy_price);
            }
        }

        return maxProfit;
    }
};
