#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0];
        int f = 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (f == 0) majority = nums[i];
            if (nums[i] == majority) ++f;
            else --f;
        }
        return majority;
    }
};



int main() {


}