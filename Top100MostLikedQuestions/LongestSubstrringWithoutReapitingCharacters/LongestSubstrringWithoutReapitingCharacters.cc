#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


int lengthOfLongestSubstring(string s) {
    int size = s.size();
    unordered_map<char, int> visitados;
    int left = 0;
    int max_size = 0;
    for (int i = 0; i< size; ++i) {
        if (visitados.find(s[i]) != visitados.end()) {
            left = max(left, visitados[s[i]] + 1);
        }
        visitados[s[i]] = i;
        int actual_size = i - left + 1;
        max_size = max(max_size, actual_size);
    }
    return max_size;
}
int main() {
    string v;
    cin >> v;
    cout << lengthOfLongestSubstring(v) << endl;
}