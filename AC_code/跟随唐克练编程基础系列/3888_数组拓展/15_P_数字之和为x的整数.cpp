#include <cstdio>
#include <algorithm>

using namespace std;

int ans[10000], cnt;

bool check(int x, int t) {
    int s = 0;
    while (t) {
        s += t % 10;
        t /= 10;
    }
    return s == x;
}

int main() {
    int x, n, s = 0;
    scanf("%d%d", &x, &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (check(x, t)) {
            ans[cnt++] = t;
            s += t;
        }
    }
    printf("%d %d\n", s, cnt);
    sort(ans, ans + cnt);
    for (int i = 0; i < cnt; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22552
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1276 kb
****************************************************************/
