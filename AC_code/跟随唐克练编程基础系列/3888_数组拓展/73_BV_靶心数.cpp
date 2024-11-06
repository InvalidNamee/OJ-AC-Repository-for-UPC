#include <iostream>
#include <algorithm>

using namespace std;

int a[100][100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i < n - 1; ++i) {
        for (int j = 1; j < m - 1; ++j) {
            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1] && a[i][j] > a[i + 1][j])
                cout << a[i][j] << endl;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22610
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2420 kb
****************************************************************/
