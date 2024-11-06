#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    int n;
    int lst = 0, u, ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &u);
        if (u > lst) ans += (u - lst) * 6;
        else ans += (lst - u) * 4;
        lst = u;
    }
    printf("%d\n", ans + n * 5);
    return 0;
}
/**************************************************************
	Problem: 1093
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2220 kb
****************************************************************/
