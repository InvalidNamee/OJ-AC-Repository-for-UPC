#include <cstdio>
#include <queue>

using namespace std;

queue<int> q, d;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        q.push(t);
    }
    while (!q.empty()) {
        d.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
    while (!d.empty()) {
        printf("%d ", d.front());
        d.pop();
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 13964
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/
