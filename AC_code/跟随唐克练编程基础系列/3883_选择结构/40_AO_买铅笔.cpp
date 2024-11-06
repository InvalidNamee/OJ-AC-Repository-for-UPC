#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, ans = 0x3f3f3f3f;
    scanf("%d", &n);
    for (int i = 0; i < 3; ++i) {
        int w, v;
        scanf("%d%d", &w, &v);
        ans = min(ans, (n + w - 1) / w * v);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 3107
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
