#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> solution;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        solution r(numRows);
        r[0].push_back(1);
        for (int i = 1; i < numRows; ++i) {
            r[i].push_back(1);
            for (int j = 1; j < r[i-1].size(); ++j) {
                r[i].push_back(r[i - 1][j] + r[i-1][j-1]);
            }
            r[i].push_back(1);
        }
        return r;
    }
};


void escribirMatriz(const solution& s) {
    int n = s.size();
    int m = s[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < s[i].size(); ++j) cout << s[i][j] << ", ";
        cout << endl;
    }
}


int main() {
    int n;
    cin >> n;
    Solution s = Solution();
    escribirMatriz(s.generate(n));
}