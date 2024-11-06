#include <cstdio>
#include <queue>

using namespace std;

int a[30010], get[30010];
priority_queue<int, vector<int>, greater<int>> rq;
priority_queue<int> lq;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &a[i]);
    }
    while (n--) {
        int p;
        scanf("%d", &p);
        get[p]++;
    }
    for (int i = 1; i <= m; ++i) {
        if (lq.empty() || a[i] >= lq.top()) rq.push(a[i]);
        else rq.push(lq.top()), lq.pop(), lq.push(a[i]);
        while (get[i]--) {
            lq.push(rq.top());
            rq.pop();
            printf("%d\n", lq.top());
        }
    }
    return 0;
}
/**************************************************************
	Problem: 7824
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:1876 kb
****************************************************************/
