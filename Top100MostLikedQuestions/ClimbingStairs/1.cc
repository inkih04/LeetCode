#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int climbStairs(int n, unordered_map<int, int>& m) {
    if (n == 0 or n == 1) return 1;
    if (m.find(n) == m.end()) {
        m[n] = climbStairs(n-1, m) + climbStairs(n-2, m);
    }
    return m[n];
}

int climbStairs(int n) {
    unordered_map<int, int> m;
    return climbStairs(n, m);
}




int main() {
    int n;
    while (cin >> n) {
        cout << climbStairs(n) << endl;
    }

}