#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int getsum(int n) {
    int l = n / 2, res = 0;
    for (int i = 1; i <= l; ++i) {
        if (n % i == 0) res += i;
    }
    return res;
}

int main() {
    int a, b;
    scanf("%d", &a);
    b = getsum(a);
    if (a == getsum(b)) printf("%d-%d\n", a, b);
    else printf("No\n");
    return 0;
}

/**************************************************************
	Problem: 10043
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:2220 kb
****************************************************************/
