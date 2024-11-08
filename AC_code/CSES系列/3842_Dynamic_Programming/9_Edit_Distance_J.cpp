#include <cstdio>
#include <iostream>

using namespace std;

int f[5010][5010];

int main() {
    string a, b;
    cin >> a >> b;
    int n = a.length(), m = b.length();
    for (int i = 1; i <= n; ++i) f[i][0] = i;
    for (int i = 1; i <= m; ++i) f[0][i] = i;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (a[i - 1] == b[j - 1]) {
                f[i][j] = f[i - 1][j - 1];
            }
            else {
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1;
            }
        }
    }
    printf("%d\n", f[n][m]);
    return 0;
}
/**************************************************************
	Problem: 23059
	Language: C++
	Result: 正确
	Time:2213 ms
	Memory:100072 kb
****************************************************************/
