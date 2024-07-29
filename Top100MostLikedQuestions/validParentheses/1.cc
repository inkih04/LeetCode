#include <iostream>
#include <vector>
#include <stack>

using namespace std;


bool isValid(string s) {
    stack<char> q;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '{' or s[i] == '[' or s[i] == '(') q.push(s[i]);
        else {
            if (q.empty()) return false;
            else if (s[i] == '}' && (q.top() != '{')) return false;
            else if (s[i] == ']' && q.top() != '[') return false;
            else if (s[i] == ')' && q.top() != '(') return false;
            q.pop();
        }
    }    
    return q.empty();
}
int main() {
    string v = "()[]{}";
    cout << isValid(v) << endl;
}