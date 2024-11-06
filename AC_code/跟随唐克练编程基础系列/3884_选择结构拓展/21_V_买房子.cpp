#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    if (k == n) {
        printf("0 0\n");
        return 0;
    }
    if (k == 0) printf("0 ");
    else printf("1 ");
    printf("%d\n", max(0, min(n - k, k * 2)));
    return 0;
}

/**************************************************************
	Problem: 21234
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
