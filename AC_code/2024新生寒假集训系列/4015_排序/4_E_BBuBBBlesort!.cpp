#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> mp;
int a[100010], p[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        mp[a[i]];
    }
    int m = 0;
    for (auto &i : mp) i.second = ++m;
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
        p[a[i]] = i;
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += p[i] - i & 1;
    }
    printf("%d\n", cnt >> 1);
    return 0;
}
/**************************************************************
	Problem: 5589
	Language: C++
	Result: 正确
	Time:89 ms
	Memory:6840 kb
****************************************************************/