#include <iostream>
#include <vector>

using namespace std;

string common(string partial_solution, string candidate) {
    int pos = 0;
    string solution = "";
    for (int i = 0; i < candidate.size() and i < partial_solution.size(); ++i) {
        if (candidate[i] != partial_solution[i]) return solution;
        solution += candidate[i];
    }
    return solution;
}

string longestCommonPrefix(vector<string>& strs) {
    int n = strs.size();
    string partial_solution;
    if( n > 0) partial_solution = strs[0]; 
    else return "";
    for (int i = 1; i < n; ++i) {
        partial_solution = common(partial_solution, strs[i]);
        if (partial_solution == "") return partial_solution;
    }
    return partial_solution;
}




int main() {
    vector<string> v = {"dog","racecar","car"};
    cout << longestCommonPrefix(v) << endl;
}