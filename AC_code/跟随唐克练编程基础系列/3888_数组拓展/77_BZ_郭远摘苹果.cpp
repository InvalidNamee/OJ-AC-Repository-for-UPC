#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    int mx = -0x3f3f3f3f, mn = 0x3f3f3f3f;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int t;
            cin >> t;
            mx = max(mx, t);
            mn = min(mn, t);
        }
    }
    cout << mx - mn << endl;
    return 0;
}
/**************************************************************
	Problem: 22614
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2380 kb
****************************************************************/
