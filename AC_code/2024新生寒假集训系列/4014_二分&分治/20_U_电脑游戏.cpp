#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int q;
    scanf("%d", &q);
    while (q--) {
        int k, n, a, b;
        scanf("%d%d%d%d", &k, &n, &a, &b);
        if (k <= (long long)n * b) printf("-1\n");
        else printf("%d\n", min(n, (k - n * b - 1) / (a - b)));
    }
    return 0;
}
/**************************************************************
	Problem: 15041
	Language: C++
	Result: 正确
	Time:47 ms
	Memory:2220 kb
****************************************************************/