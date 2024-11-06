#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    long long s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0 && i % 3 != 0) cnt++, s += i;
    }
    printf("%d\n%lld\n", cnt, s);
    return 0;
}

/**************************************************************
	Problem: 22480
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2220 kb
****************************************************************/
