#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, s, cur = 0, res = 0;
    scanf("%d%d", &n, &s);
    for (int i = 1; i <= n; ++i) {
        cur = max(cur, s);
        res += cur;
        s = (379 * s + 131) % 997;
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23308
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/