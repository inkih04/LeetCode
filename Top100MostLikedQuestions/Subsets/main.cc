class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> solT;
        vector<int> solP;
        back_track(nums, solT, solP, 0);
        return solT;
        
    }
    void back_track(vector<int>& nums, vector<vector<int>>& solT, vector<int> solP, int start) {
        solT.push_back(solP);

        for (int i = start; i < nums.size(); ++i) {
            solP.push_back(nums[i]);
            back_track(nums, solT, solP, i+1);
            solP.pop_back();
        }

    }
};
