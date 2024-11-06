#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>

using namespace std;

int a[1010], b[1010];
map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    memcpy(b, a, sizeof(a));
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; ++i) {
        if (!mp[b[i]]) mp[b[i]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", mp[a[i]]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9825
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1316 kb
****************************************************************/
