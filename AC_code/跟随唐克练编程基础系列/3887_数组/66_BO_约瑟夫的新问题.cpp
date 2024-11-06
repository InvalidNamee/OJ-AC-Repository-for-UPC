#include <cstdio>
#include <deque>

using namespace std;

deque<int> q;

int main() {
    int m, s, n, k;
    scanf("%d%d%d%d", &m, &s, &n, &k);
    for (int i = 1; i <= m; ++i) {
        q.push_back(i);
    }
    for (int i = 1; i < s; ++i) {
        q.push_back(q.front());
        q.pop_front();
    }
    while (!q.empty()) {
        int t1 = (n - 1) % q.size() + 1;
        for (int i = 1; i < t1; ++i) {
            q.push_back(q.front());
            q.pop_front();
        }
        printf("%d ", q.front());
        q.pop_front();
        if (q.empty()) break;
        int t2 = (k - 1) % q.size() + 1;
        for (int i = 1; i < t2; ++i) {
            q.push_front(q.back());
            q.pop_back();
        }
        printf("%d ", q.back());
        q.pop_back();
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 1869
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1364 kb
****************************************************************/
