#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int a[100];

int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        if (a[i] % b == 0) continue;
        else if (isupper(a[i])) printf("%c ", a[i]);
        else printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22568
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
