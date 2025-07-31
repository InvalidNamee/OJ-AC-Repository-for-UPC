#include <cstdio>
#include <map>

using namespace std;

int a[200010];
map<int, int> last;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int h = 1, len = 0, ans = 0;
    for (int t = 1; t <= n; ++t) {
        if (last[a[t]]) {
            while (h <= last[a[t]]) h++, len--;
        }
        last[a[t]] = t;
        len ++;
        ans = max(ans, len);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23022
	Language: C++
	Result: 正确
	Time:1748 ms
	Memory:11028 kb
****************************************************************/
