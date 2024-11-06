#include <cstdio>
#include <iostream>

using namespace std;

bool check(int n) {
    int lst = n % 10;
    n /= 10;
    int d = n % 10 - lst;
    while (n) {
        if (n % 10 - lst != d) return false;
        lst = n % 10;
        n /= 10;
    }
    return true;
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22446
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
