#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int f[110];
int a[11];

int main() {
    memset(f, 0x3f, sizeof(f));
    int m;
    for (int i = 1; i <= 10; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    f[0] = 0;
    for (int i = 1; i <= 10; ++i) {
        for (int j = i; j <= m; ++j) {
            f[j] = min(f[j], f[j - i] + a[i]);
        }
    }
    printf("%d\n", f[m]);
    return 0;
}
/**************************************************************
	Problem: 23906
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:2220 kb
****************************************************************/