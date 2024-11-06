#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s, t, ans;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    int l = max(s.length(), t.length());
    for (int i = 0; i < s.length(); ++i) s[i] -= 48;
    for (int i = 0; i < t.length(); ++i) t[i] -= 48;
    if (s.length() < t.length()) swap(s, t);
    for (int i = 0; i < t.length(); ++i) {
        ans += s[i] + t[i];
    }
    for (int i = t.length(); i < s.length(); ++i) {
        ans += s[i];
    }
    for (int i = 0; i < ans.length(); ++i) {
        if (ans[i] > 9) {
            if (i == ans.length() - 1) ans += 1; 
            else ans[i + 1] += 1;
            ans[i] -= 10;
        }
    }
    for (int i = ans.length() - 1; i >= 0; --i) {
        cout << (int)ans[i];
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 9865
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2384 kb
****************************************************************/
