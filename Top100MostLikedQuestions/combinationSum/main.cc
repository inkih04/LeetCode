#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> solT;
        vector<int> solP;
        back_track(candidates, target, solT, solP, 0, 0);
        return solT;
    }

    void back_track(vector<int>& candidates, int target, vector<vector<int>>& solC, vector<int>& solP, int begin, int suma) {
        if (suma == target) solC.push_back(solP);
        else if (suma < target){
            for (int i = begin; i < candidates.size(); ++i) {
                solP.push_back(candidates[i]);
                suma += candidates[i];

                back_track(candidates, target, solC, solP, i, suma);

                suma -= candidates[i];
                solP.pop_back();


            }
        }

    }
};
