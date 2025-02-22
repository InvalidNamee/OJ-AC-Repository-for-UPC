#include <iostream>
#include <algorithm>

using namespace std;

const int N = 200010;

int f[N][30];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) {
        cin >> f[i][0];
    }
    for (int j = 1; j < 30; ++j) {
        for (int i = 1; i <= n; ++i) {
            f[i][j] = f[f[i][j - 1]][j - 1];
        }
    }
    while (q--) {
        int x, k;
        cin >> x >> k;
        for (int i = 29; i >= 0; --i) {
            if (k >= (1 << i)) {
                k -= (1 << i);
                x = f[x][i];
            }
        }
        cout << x << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 23093
	Language: C++
	Result: 正确
	Time:536 ms
	Memory:25820 kb
****************************************************************/