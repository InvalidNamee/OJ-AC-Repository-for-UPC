#include <iostream>

using namespace std;

string s[51], a[51];
bool v[51];
int res, n;

void dfs(int u) {
    res = max(res, u);
    for (int i = 1; i < n; ++i) {
        if (!v[i] && s[i].front() == a[u - 1].back()) {
            v[i] = true;
            a[u] = s[i];
            dfs(u + 1);
            v[i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    a[0] = s[0];
    dfs(1);
    cout << res << endl;
    return 0;
}
/**************************************************************
	Problem: 21776
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2228 kb
****************************************************************/