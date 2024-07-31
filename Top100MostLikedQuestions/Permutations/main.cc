#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int> solP(nums.size());
        backTrack(nums, solP, 0, sol);
        return sol;
        
    }

    void backTrack(vector<int>& nums, vector<int>& solP, int pos, vector<vector<int>>& solMat) {
        if (nums.size() == pos) solMat.push_back(solP);
        else {
            for (int i = 0; i <nums.size(); ++i) {
                if (nums[i] != -100) { //no visited
                    int temp = nums[i];
                    nums[i] = -100;

                    solP[pos] = temp;
                    backTrack(nums, solP, pos+1, solMat);

                    nums[i] = temp;
                }
            }
        }
    }

};