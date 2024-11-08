#include <cstdio>
#include <iostream>

using namespace std;

int f[510][510];

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            if (i != j) {
                f[i][j] = 0x3f3f3f3f;
                for (int k = 1; k < i; ++k) {
                    f[i][j] = min(f[i][j], f[i - k][j] + f[k][j] + 1);
                }
                for (int k = 1; k < j; ++k) {
                    f[i][j] = min(f[i][j], f[i][k] + f[i][j - k] + 1);
                }
            }
        }
    }
    printf("%d\n", f[a][b]);
    return 0;
}
/**************************************************************
	Problem: 23060
	Language: C++
	Result: 正确
	Time:4959 ms
	Memory:3040 kb
****************************************************************/
