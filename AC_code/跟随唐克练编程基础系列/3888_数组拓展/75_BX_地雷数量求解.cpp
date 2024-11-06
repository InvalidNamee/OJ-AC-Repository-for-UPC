#include <iostream>
#include <algorithm>

using namespace std;

bool check(int x) {
    int s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s & 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    int t, cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> t;
            cnt += check(t);
        }
    }
    cout << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 22612
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2380 kb
****************************************************************/
