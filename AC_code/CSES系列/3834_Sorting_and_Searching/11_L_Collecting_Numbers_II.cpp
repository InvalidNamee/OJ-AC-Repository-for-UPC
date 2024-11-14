#include <cstdio>
#include <iostream>

using namespace std;
 
int a[200010], p[200010];

int cal(int l, int r) {
    int res = 1;
    for (int i = l; i <= r; ++i) {
        // printf("%d ", p[i]);
        if (p[i - 1] >= p[i]) res ++;
    }
    // printf("\n");
    return res;
}
 
int main() {
    int n, m, t = 1;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        p[a[i]] = i;
    }
    p[n + 1] = n + 1;
    int ans = cal(1, n);
    while (m --) {
        int x, y;
        scanf("%d%d", &x, &y);
        int t = ans;
        if (a[x] > a[y]) swap(x, y);
        if (a[y] - a[x] <= 2) {
            int t1 = cal(a[x], a[y] + 1);
            swap(p[a[x]], p[a[y]]);
            int t2 = cal(a[x], a[y] + 1);
            ans += t2 - t1;
            printf("%d\n", ans);
            swap(a[x], a[y]);
        }
        else {
            int t1 = cal(a[x], a[x] + 1) + cal(a[y], a[y] + 1);
            swap(p[a[x]], p[a[y]]);
            int t2 = cal(a[x], a[x] + 1) + cal(a[y], a[y] + 1);
            ans += t2 - t1;
            // printf("%d %d\n", t1, t2);
            printf("%d\n", ans);
            swap(a[x], a[y]);
        }
    }
    return 0;
}

/*
5 7 6 4 9 3 2 8 1 10 

9 7 6 4 1 3 2 7 5 10
9 7 6 4 5 3 2 7 1 10

*/
/**************************************************************
	Problem: 23021
	Language: C++
	Result: 正确
	Time:213 ms
	Memory:3584 kb
****************************************************************/
