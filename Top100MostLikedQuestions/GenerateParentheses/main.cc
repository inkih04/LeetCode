class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string solP;
        vector<string> solT;

        back_track(n, n,solP,solT);

        return solT;
    }
    
    void back_track(int left_parenth,int right_parenth, string& solP, vector<string>& solT) {
        if (left_parenth == 0 && right_parenth == 0) solT.push_back(solP);
        else{
            if (left_parenth > 0 && left_parenth <= right_parenth) {
                string temp = solP;
                solP +='(';

                back_track(left_parenth - 1, right_parenth, solP, solT);

                solP = temp;
            }
            if (right_parenth > 0 && solP.size() > 0) { 
                string temp = solP;
                solP +=')';

                back_track(left_parenth, right_parenth-1, solP, solT);

                solP = temp;

            }
            
        }
    }
};
