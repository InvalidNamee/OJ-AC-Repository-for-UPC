#include <queue>
#include <cstdio>

using namespace std;

priority_queue<int> q;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        q.push(t);
    }
    int cnt = 0;
    while (m > 0 && !q.empty()) {
        cnt++;
        m -= q.top();
        q.pop();
    }
    if (m > 0) printf("NO\n");
    else printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23835
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/