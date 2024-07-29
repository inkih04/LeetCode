#include <iostream>
#include <vector>

using namespace std;

int binary_search(const vector<int>& n, int l, int r, int t) {
    int m = (l+r)/2;
    if (n[m] == t) return m;
    if (l + 1 == r) return r;
    if (n[m] > t) return binary_search(n, l, m, t);
    if (n[m] < t) return binary_search(n, m, r, t);
    return -1;
}

int searchInsert(vector<int>& nums, int target) {
    if (nums[0] > target) return 0;
    else if (nums[int(nums.size()) -1] < target) return int(nums.size());
    return binary_search(nums, 0, nums.size(), target);
}

int main() {
    vector<int> n = {1, 2, 5, 6};
    int target = 4;
    cout << searchInsert(n, target) << endl;
}