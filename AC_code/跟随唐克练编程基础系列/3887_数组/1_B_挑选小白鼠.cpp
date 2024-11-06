#include <cstdio>
#include <iostream>

using namespace std;

typedef pair<int, int> pii;

int main() {
    int n;
    pii mn = {0x3f3f3f3f, 0}, mx = {-0x3f3f3f3f, 0};
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mn = min(mn, {t, i});
        mx = max(mx, {t, i});
    }
    printf("%d %d\n%d %d\n", mx.first, mx.second, mn.first, mn.second);
    return 0;
}
/**************************************************************
	Problem: 9839
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
