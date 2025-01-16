#include <cstdio>

long long f[60];

int main() {
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    f[0] = 1;
    for (int i = 1; i <= z; ++i) {
        f[i] = f[i - 1];
        if (i - x - 2 >= 0) f[i] += f[i - x - 2] * y;
    }
    printf("%lld\n", f[z]);
    return 0;
}


/**************************************************************
	Problem: 23089
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/