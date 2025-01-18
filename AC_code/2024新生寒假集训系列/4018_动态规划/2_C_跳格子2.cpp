#include <cstdio>
#include <iostream>

using namespace std;

long long x[100010];

int main() {
    int n, A, B, C;
    scanf("%d%d%d%d", &n, &A, &B, &C);
    for (int i = 1; i <= n; i++) {
        int tmp = ((long long)A * i * i + B * i + C) % 20000;
        x[i] = tmp - 10000;
        if (i >= 2) x[i] += min(x[i - 1], x[i - 2]);
    }
    printf("%lld\n", min(x[n], x[n - 1]));
    return 0;
}
/**************************************************************
	Problem: 23310
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:3004 kb
****************************************************************/