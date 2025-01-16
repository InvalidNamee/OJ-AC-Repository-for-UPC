#include <iostream>

using namespace std;

string s[51];
bool v[51];
int res, n;

void dfs(string loong) {
    res = max(res, (int)loong.length());
    // cout << loong << endl;
    for (int i = 1; i <= n; ++i) {
        if (v[i]) continue;
        // if (loong.length() <= s[i].length() && s[i].substr(0, loong.length()) == loong) continue;
        // else if (loong.length() >= s[i].length() && loong.substr(loong.length() - s[i].length()) == s[i]) continue;
        int lim = min(loong.length(), s[i].length());
        for (int t = 1; t < lim; ++t) {
            if (loong.substr(loong.length() - t) == s[i].substr(0, t)) {
                // cout << loong.substr(loong.length() - t) << endl << s[i].substr(0, t) << endl;
                v[i] = true;
                dfs(loong + s[i].substr(t));
                v[i] = false;
                break;
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        s[i + n] = s[i];
    }
    n <<= 1;
    char c;
    cin >> c;
    for (int i = 1; i <= n; ++i) {
        if (s[i].front() == c) {
            v[i] = true;
            dfs(s[i]);
            v[i] = false;
        }
    }
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 23873
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/