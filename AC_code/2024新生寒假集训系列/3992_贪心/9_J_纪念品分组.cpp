#include <cstdio>
#include <deque>
#include <algorithm>

using namespace std;

deque<int> q;

int main() {
    int n, w;
    scanf("%d%d", &w, &n);
    for (int i = 1; i <= n; ++i) {
        int v;
        scanf("%d", &v);
        q.push_back(v);
    }
    sort(q.begin(), q.end());
    int cnt = 0;
    while (q.size() > 1) {
        if (q.front() + q.back() <= w) {
            q.pop_front();
            q.pop_back();
        }
        else q.pop_back();
        cnt++;
    }
    if (!q.empty()) cnt++;
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 2814
	Language: C++
	Result: 正确
	Time:7 ms
	Memory:1500 kb
****************************************************************/