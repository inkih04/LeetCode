#include <vector>
#include <iostream>
#include <utility>
#include <set>

using namespace std;

class Solution {
public:

    bool back_track(const vector<vector<char>>& board, string word, int ind_word, vector<vector<bool>>& visitado, const pair<int, int>& pos) {
        int i = pos.first;
        int j = pos.second;
        if (ind_word == word.size() - 1 and board[i][j] == word[ind_word]) return true;
        if (board[i][j] == word[ind_word]) {
            visitado[i][j] = true;
            bool b1 = false; bool b2 = false; bool b3 = false; bool b4 = false;
            if (i-1 >= 0 and !visitado[i-1][j] ) {
                b1 = back_track(board, word, ind_word+1, visitado, {i - 1, j});
                if (b1) return true;
            }
            if (i+1 < board.size() and !visitado[i+1][j]) {
                b2 = back_track(board, word, ind_word + 1, visitado, {i + 1, j});
                if (b2) return true;
            }
            if (j - 1 >= 0 and !visitado[i][j-1]) {
                b3 = back_track(board, word, ind_word + 1, visitado, {i, j-1});
                if (b3) return true;
            }
            if (j+1 < board[0].size() and !visitado[i][j+1]) {
                b4 = back_track(board, word, ind_word + 1, visitado, {i, j+1});
                if (b4) return true;
            }
            visitado[i][j] = false;  // Remove from visited set if not found
        }
        return false;
    }


    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == word[0]) {
                     int rows = board.size();
                    int cols = board[0].size();
                    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
                    if (back_track(board, word, 0, visited, {i, j})) return true;
                }
            }
        }
        return false;
    }
};




int main() {
    Solution s;
    std::vector<std::vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'E', 'S'},
        {'A', 'D', 'E', 'E'}
    };

    // Definimos la palabra a buscar
    std::string word = "ABCESEEEFS";

    cout << s.exist(board, word);



}
