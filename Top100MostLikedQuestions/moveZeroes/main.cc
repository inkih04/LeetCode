class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; int j = 1;
        while(j < nums.size()) {
            if(nums[j] != 0 and nums[i] == 0) {
                nums[i] = nums[j];
                nums[j] = 0;
                ++i;
                ++j;
            }
            else if (nums[j]== 0 and nums[i] == 0) {
                ++j;
            }
            else {
                ++i;
                ++j;

            }
        }
        
    }
};