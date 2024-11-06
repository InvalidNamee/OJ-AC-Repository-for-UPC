#include <cstdio>
#include <iostream>

using namespace std;

int a[10000];

int main() {
    int n, p = 0, mx = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] > mx) p = i, mx = a[i];
    }
    swap(a[0], a[p]);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10139
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2260 kb
****************************************************************/
