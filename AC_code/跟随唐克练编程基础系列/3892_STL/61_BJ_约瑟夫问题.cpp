#include <cstdio>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        q.push(i);
    }
    while (!q.empty()) {
        int t = (n - 1) % q.size() + 1;
        for (int i = 1; i < t; ++i) {
            q.push(q.front());
            q.pop();
        }
        printf("%d\n", q.front());
        q.pop();
    }
    return 0;
}
/**************************************************************
	Problem: 10161
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/
