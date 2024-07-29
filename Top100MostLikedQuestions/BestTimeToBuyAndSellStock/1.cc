#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int best_profit = 0;
        int least = INT_MAX;

        for (int i = 0; i < prices.size(); ++i) {
            if (prices[i] < least) least = prices[i];
            profit = prices[i] - least;
            best_profit = max(profit, best_profit);
        }
        return best_profit;
    }
};



int main() {
    Solution s = Solution();
    vector<int> v = {2,4,1};
    cout << s.maxProfit(v);
}