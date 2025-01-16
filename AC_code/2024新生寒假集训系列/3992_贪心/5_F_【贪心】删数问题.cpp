#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string s, ans;
    int n, h = 0;
    cin >> s >> n;
    int cnt = s.length() - n;
    while (cnt--) {
        int t = h;
        for (int i = h; i < h + n + 1 && i < s.length(); ++i) {
            if (s[i] < s[t]) t = i;
        }
        n -= t - h;
        h = t + 1;
        ans += s[t];
    }
    int t = 0;
    while (ans[t] == '0' && ans.length() > 1) t++;
    ans = ans.substr(t);
    if (ans == "") ans = "0";
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 2152
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/