#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[100000];

int main() {
    int n, mx = 0, res = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 0; --i) {
        if (a[i].second < mx) res++; 
        mx = max(a[i].second, mx);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 21555
	Language: C++
	Result: 正确
	Time:28 ms
	Memory:2020 kb
****************************************************************/
