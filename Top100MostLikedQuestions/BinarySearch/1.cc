#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size() - 1, target);
    }
    int binarySearch(vector<int>& nums, int l, int r, int target) {
        if (l > r) return -1;
        int mid = (l + r)/2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target) return binarySearch(nums, l, mid -1, target);
        else return binarySearch(nums, mid+1, r, target);
    }
};

int main() {
    vector<int> v = {-1,0,3,5,9,12};
    Solution s = Solution();
    cout << s.search(v, 9);


}