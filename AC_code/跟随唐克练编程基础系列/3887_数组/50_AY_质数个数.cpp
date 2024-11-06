#include <cstdio>
#include <iostream>

using namespace std;

bool p[4000001];

bool check(int n, int d) {
    while (n) {
        if (n % 10 == d) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int a, b, d;
    scanf("%d%d%d", &a, &b, &d);
    int cnt = 0;
    for (int i = 2; i <= b; ++i) {
        if (p[i]) continue;
        if (i >= a) cnt += check(i, d);
        for (int j = 2; i * j <= b; ++j) {
            p[i * j] = true;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10162
	Language: C++
	Result: 正确
	Time:28 ms
	Memory:6128 kb
****************************************************************/
