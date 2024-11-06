#include <cstdio>
#include <algorithm>
#include <deque>

using namespace std;

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a, a + n, [](int a, int b) { return a > b; });
    deque<int> q;
    q.push_back(a[0]);
    for (int i = 1; i < n; ++i) {
        if (i & 1) q.push_back(a[i]);
        else q.push_front(a[i]);
    }
    for (auto i : q) printf("%d ", i);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9827
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1368 kb
****************************************************************/
