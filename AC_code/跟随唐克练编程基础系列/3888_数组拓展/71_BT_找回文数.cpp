#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    string s, t;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> s;
            t = s;
            reverse(t.begin(), t.end());
            if (s == t) cout << s << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22608
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
