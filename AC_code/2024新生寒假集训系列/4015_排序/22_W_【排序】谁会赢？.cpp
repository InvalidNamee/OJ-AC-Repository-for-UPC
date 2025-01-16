#include <cstdio>
#include <algorithm>
#include <unordered_set>

using namespace std;

pair<int, int> a[50010];

int main() {
    int n, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i].first);
        a[i].second = i;
    }
    sort(a + 1, a + n + 1);
    for (int i = n; i > 1; --i) {
        int l = 1, r = i - 1;
        while (l < r) {
            if (a[l].first + a[r].first == a[i].first) break;
            else if (a[l].first + a[r].first < a[i].first) l++;
            else r--;
        }
        if (a[l].first + a[r].first == a[i].first) {
            printf("%d\n", a[i].second);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
/**************************************************************
	Problem: 3577
	Language: C++
	Result: 正确
	Time:22 ms
	Memory:1628 kb
****************************************************************/