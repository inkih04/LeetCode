#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


int romanToInt(string s) {
    int size = s.length();
    int valor = 0;
    unordered_map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    for (int i = 0; i < size; ++i) {
        if(i + 1 < size && m[s[i]] < m[s[i+1]]) valor = valor - m[s[i]];
        else {
            valor = m[s[i]] + valor;
        }    
    }
    return valor;
}

int main() {
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
}