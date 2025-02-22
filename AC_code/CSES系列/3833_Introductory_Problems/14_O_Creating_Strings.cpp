#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<string> ans;
string pre_ans;
int t[30];

void dfs(int n) {
    if (!n) {
        ans.push_back(pre_ans);
        return;
    }
    for (int i = 0; i < 26; ++i) {
        if (t[i]) {
            t[i] --;
            // string tmp = pre_ans;
            pre_ans += i + 'a';
            dfs(n - 1);
            pre_ans.pop_back();
            t[i] ++;
        }
    }
}

signed main() {
    // freopen("data", "r", stdin);
    string s;
    cin >> s;
    int n = s.length();
    for (auto i : s) {
        t[i - 'a'] ++;
    }
    dfs(n);
    cout << ans.size() << endl;
    for (auto i : ans) {
        for (auto j : i) putchar(j);
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 23006
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:5180 kb
****************************************************************/