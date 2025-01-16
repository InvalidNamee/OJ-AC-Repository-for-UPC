#include <cstdio>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> q;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        q.push(t);
        if (i > 2) q.pop();
    }
    int a = q.top();
    q.pop();
    printf("%d\n", a * q.top());
    return 0;
}
/**************************************************************
	Problem: 17415
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1360 kb
****************************************************************/