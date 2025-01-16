#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int a[51];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int res = 0;
    for (int i = 0; i <= min(n, k); ++i) {
        for (int j = 0; i + j <= min(n, k); ++j) {
            priority_queue<int, vector<int>, greater<int>> q;
            int s = 0;
            for (int k = 1; k <= i; ++k) q.push(a[k]), s += a[k];
            for (int k = n - j + 1; k <= n; ++k) q.push(a[k]), s += a[k];
            int l = k - i - j;
            while (l && !q.empty() && q.top() <= 0) {
                s -= q.top();
                l--;
                q.pop();
            }
            res = max(res, s);
        }
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 14474
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2224 kb
****************************************************************/