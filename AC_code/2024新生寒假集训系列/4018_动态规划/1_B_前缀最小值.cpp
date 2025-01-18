#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, s, cur = 0x3f3f3f3f, res = 0;
    scanf("%d%d", &n, &s);
    for (int i = 1; i <= n; ++i) {
        cur = min(cur, s);
        res += cur;
        s = (379 * s + 131) % 997;
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23309
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/