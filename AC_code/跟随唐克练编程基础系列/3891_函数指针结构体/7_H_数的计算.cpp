#include <iostream>
#include <cstdio>

using namespace std;

long long a[1010];

int main() {
    int n;
    scanf("%d", &n);
    a[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= (i >> 1); ++j) {
            a[i] += a[j];
        }
    }
    printf("%lld\n", a[n]);
    return 0;
}
/**************************************************************
	Problem: 3508
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2228 kb
****************************************************************/
