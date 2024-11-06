#include <cstdio>
#include <iostream>

using namespace std;

int a[100];

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (abs(a[i] - x) <= 5) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22567
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
