#include <queue>
#include <cstdio>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        q.push(t);
    }
    int cnt = 0;
    while (!q.empty() && x >= q.top()) {
        cnt++;
        x -= q.top();
        q.pop();
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 23839
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/