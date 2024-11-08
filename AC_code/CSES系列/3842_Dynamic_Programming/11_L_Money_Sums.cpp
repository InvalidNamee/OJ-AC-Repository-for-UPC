#include <cstdio>
#include <iostream>

using namespace std;

bool f[100010];
int w[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &w[i]);
    }
    f[0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 100000; j >= w[i]; --j) {
            f[j] |= f[j - w[i]];
        }
    }
    int tot = 0;
    for (int i = 1; i <= 100000; ++i) {
        if (f[i]) tot++;
    }
    printf("%d\n", tot);
    for (int i = 1; i <= 100000; ++i) {
        if (f[i])
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23061
	Language: C++
	Result: 正确
	Time:299 ms
	Memory:2120 kb
****************************************************************/
