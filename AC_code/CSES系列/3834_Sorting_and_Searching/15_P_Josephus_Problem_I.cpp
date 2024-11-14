#include <cstdio>

using namespace std;

int pre[200010], ne[200010];

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("1\n");
        return 0;
    }
    pre[1] = n;
    ne[n] = 1;
    for (int i = 2; i <= n; ++i) {
        pre[i] = i - 1;
    }
    for (int i = 1; i < n; ++i) {
        ne[i] = i + 1;
    }
    int p = 2;
    while (n --) {
        printf("%d ", p);
        ne[pre[p]] = ne[p];
        pre[ne[p]] = pre[p];
        p = ne[ne[p]];
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23025
	Language: C++
	Result: 正确
	Time:55 ms
	Memory:2680 kb
****************************************************************/
