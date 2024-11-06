#include <iostream>

using namespace std;

int t[26];

int main() {
    string s;
    cin >> s;
    for (auto i : s) {
        t[i - 'a']++;
    }    
    for (auto i : s) {
        if (t[i - 'a'] == 1) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 5270
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
