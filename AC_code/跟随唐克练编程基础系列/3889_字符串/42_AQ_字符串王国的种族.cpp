#include <iostream>

using namespace std;

int t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        t[s[0] - 'a'] = true;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i) {
        ans += t[i];
    }
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 9854
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:2384 kb
****************************************************************/
