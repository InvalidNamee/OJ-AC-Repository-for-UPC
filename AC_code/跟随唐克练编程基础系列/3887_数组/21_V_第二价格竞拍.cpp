#include <cstdio>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int n, mx = 0, mxp = 0, _mx = 0;
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i) {
            int t;
            scanf("%d", &t);
            if (t > mx) {
                _mx = mx;
                mx = t;
                mxp = i;
            }
            else if (t > _mx) {
                _mx = t;
            }
        }
        printf("%d %d\n", mxp, _mx);
    }
    return 0;
}
/**************************************************************
	Problem: 3101
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
