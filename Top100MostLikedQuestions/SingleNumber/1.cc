#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i+= 2) {
            if (i+1 == nums.size()) return nums[i];
            if (nums[i] != nums[i+1]) return nums[i];
        }
        return nums[nums.size() -1];
    }
};

int main() {
    Solution s = Solution();
    vector<int> v = {4,1,2,1,2};
    cout << endl << s.singleNumber(v) << endl;
}