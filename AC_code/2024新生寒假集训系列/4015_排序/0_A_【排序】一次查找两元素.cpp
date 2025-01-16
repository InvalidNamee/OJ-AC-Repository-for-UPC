#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int> q;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        q.push(t);
        if (i > 2) q.pop();
    }
    int a, b;
    a = q.top();
    q.pop();
    b = q.top();
    printf("%d %d\n", b, a);
    return 0;
}
/**************************************************************
	Problem: 2214
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1360 kb
****************************************************************/