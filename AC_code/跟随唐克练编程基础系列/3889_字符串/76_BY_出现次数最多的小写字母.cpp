#include <iostream>

using namespace std;

int a[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        a[s[i] - 'a']++;
    }
    pair<int, int> mx = {0, 0};
    for (int i = 0; i < 26; ++i) {
        mx = max(mx, {a[i], i});
    }
    cout << (char)(mx.second + 'a') << endl;
    return 0;
}
/**************************************************************
	Problem: 22646
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
