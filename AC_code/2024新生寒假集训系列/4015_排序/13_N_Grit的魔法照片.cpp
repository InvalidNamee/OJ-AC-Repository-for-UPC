#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[50010];
int d[11];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= 10; ++i) {
        scanf("%d", &d[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].first);
        a[i].first *= -1;
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        a[i].first -= d[(i - 1) % 10 + 1];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= k; ++i) {
        printf("%d ", a[i].second);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 14960
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:1632 kb
****************************************************************/