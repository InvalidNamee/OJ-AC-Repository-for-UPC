#include <cstdio>
#include <cmath>
#include <algorithm>
#define R 0.6180339887498949
using namespace std;

int a[30010];

int main() {
    int n;
    int ans[2];
    double mn = 100000;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 2; i <= n; ++i) {
        int l = 1, r = i - 1;
        while (l < r) {
            int mid = l + r + 1 >> 1;
            if (a[mid] < R * a[i]) l = mid;
            else r = mid - 1;
        }
        double p1 = fabs((double)a[l] / a[i] - R), p2 = fabs((double)a[l + 1] / a[i] - R);
        if (p1 < p2) {
            if (p1 < mn) {
                mn = p1;
                ans[0] = l, ans[1] = i;
            }
        }
        else {
            if (p2 < mn) {
                mn = p2;
                ans[0] = l + 1, ans[1] = i;
            }
        }
    }
    printf("%d\n%d\n", a[ans[0]], a[ans[1]]);
    return 0;
}
/**************************************************************
	Problem: 16970
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:1356 kb
****************************************************************/