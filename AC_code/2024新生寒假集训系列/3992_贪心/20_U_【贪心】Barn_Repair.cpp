#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue<int> q;
int cow[210];

int main() {
    int m, s, c, p;
    scanf("%d%d%d", &m, &s, &c);
    int ans = 0;
    for (int i = 1; i <= c; ++i) {
        scanf("%d", &cow[i]);
    }
    sort(cow + 1, cow + c + 1);
    for (int i = 2; i <= c; ++i) {
        if (cow[i] - cow[i - 1] - 1) q.push(cow[i] - cow[i - 1] - 1);
    }
    ans = cow[c] - cow[1] + 1;
    m--;
    while (!q.empty() && m) {
        m--;
        ans -= q.top();
        q.pop();
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 8053
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1368 kb
****************************************************************/