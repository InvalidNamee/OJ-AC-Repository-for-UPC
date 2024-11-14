#include <cstdio>
#include <algorithm>
#include <iostream>
#include <deque>

using namespace std;

typedef long long ll;

deque<ll> q;
ll w[200010];

int main() {
    int n, m, ans = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &w[i]);
    }
    sort(w + 1, w + n + 1);
    for (int i = 1; i <= n; ++i) {
        q.push_back(w[i]);
    }
    while (!q.empty()) {
        if (q.size() == 1) {
            ans ++;
            break;
        }
        else if (q.front() + q.back() <= m) {
            q.pop_front(), q.pop_back();
            ans ++;
        }
        else {
            q.pop_back();
            ans ++;
        }
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23013
	Language: C++
	Result: 正确
	Time:629 ms
	Memory:5196 kb
****************************************************************/
