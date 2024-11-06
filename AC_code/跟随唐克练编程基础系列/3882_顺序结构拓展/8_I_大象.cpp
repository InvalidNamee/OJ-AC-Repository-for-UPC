#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 5; i; --i) {
        ans += n / i;
        n %= i;
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 14275
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
