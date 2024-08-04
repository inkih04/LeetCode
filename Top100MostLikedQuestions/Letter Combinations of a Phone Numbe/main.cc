class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if ( int(digits.size()) != 0) {
            vector<string> characters = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
            vector<string> solution;
            string current_solution;

            back_track(digits, characters, solution, current_solution, 0);
            return solution;
        }
        else return {};
    }

    void back_track(string digits, const vector<string>& characters, vector<string>& solution, string& current_solution, int pos) {
        if (pos == digits.size()) solution.push_back(current_solution);
        else {
            int digit = digits[pos] - '0';
            string avilable_characters = characters[digit-2]; //-2 porque digit va de 2 - 9
            for (int i = 0; i < int(avilable_characters.size()); ++i) {
                current_solution += avilable_characters[i];

                back_track(digits, characters, solution, current_solution, pos+1);

                current_solution.pop_back();
            }
        }
    }

    
};
