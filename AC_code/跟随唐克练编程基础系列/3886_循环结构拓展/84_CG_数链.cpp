#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

// int a[3000010];

int f(int n) {
    if (n == 1) return 1;
    // else if (a[n]) return a[n];
    else if (n % 2 == 0) return f(n / 2) + 1;
    else return f(n * 3 + 1) + 1;
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b) != -1) {
        int mx = 0;
        for (int i = a; i <= b; ++i) {
            mx = max(mx, f(i));
        }
        printf("%d\n", mx);
    }
    return 0;
}
/**************************************************************
	Problem: 12431
	Language: C++
	Result: 正确
	Time:37 ms
	Memory:2220 kb
****************************************************************/
