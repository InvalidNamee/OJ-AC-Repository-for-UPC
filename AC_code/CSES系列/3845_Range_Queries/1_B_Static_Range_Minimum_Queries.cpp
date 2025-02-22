#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int N = 200010;

int f[N][20];
int n, q;

void init() {
    for (int i = 1; i < 20; ++i) {
        for (int j = 1; j <= n - (1 << i) + 1; ++j) {
            f[j][i] = min(f[j][i - 1], f[j + (1 << i - 1)][i - 1]);
        }
    }
}

int query(int l, int r) {
    // printf("q %d %d\n", l, r);
    int ans = 0x3f3f3f3f;
    // printf("%d ", l);
    for (int i = 19; i >= 0; --i) {
        if (l + (1 << i) - 1 <= r) {
            ans = min(ans, f[l][i]);
            l += 1 << i;
            // printf("[%d, %d]\n", l, i);
            // printf("%d ", l);
        }
    }   
    // printf("\n");
    return ans;
}

int main() {
    scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &f[i][0]);
    }
    init();
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%d\n", query(l, r));
    }
    return 0;
}
/**************************************************************
	Problem: 23112
	Language: C++
	Result: 正确
	Time:157 ms
	Memory:17848 kb
****************************************************************/