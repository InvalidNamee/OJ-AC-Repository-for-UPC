#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[10000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d %d\n", a[i].first, a[i].second);
    }
    return 0;
}
/**************************************************************
	Problem: 22051
	Language: C++
	Result: 正确
	Time:5 ms
	Memory:1316 kb
****************************************************************/
