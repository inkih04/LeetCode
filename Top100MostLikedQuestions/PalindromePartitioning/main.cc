#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        back_track(s, res, curr, 0);
        return res;
    }

    bool isPalindrome(string word, int i, int j) {
        while (j > i) {
            if (word[i] != word[j]) return false;
            ++i; --j;
        }
        return true;
    }

    void back_track(string s, vector<vector<string>>& solution, vector<string> currentS, int l) {
        if (l == s.size()) solution.push_back(currentS);
        for (int r = l; r < s.size(); ++r) {
            if(isPalindrome(s, l, r)) {
                currentS.push_back(s.substr(l, r - l+1));
                back_track(s, solution, currentS, r+1);
                currentS.pop_back();
            }
        }
    }
};