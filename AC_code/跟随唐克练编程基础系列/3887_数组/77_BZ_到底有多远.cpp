#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

int b[1000010];
map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; ++i) {
        mp[b[i]] = i;
    }
    
    int m;
    scanf("%d", &m);
    while (m--) {
        int x, y;
        scanf("%d%d", &x, &y);
        printf("%d\n", abs(mp[x] - mp[y]));
    }
    return 0;
}
/**************************************************************
	Problem: 9820
	Language: C++
	Result: 正确
	Time:522 ms
	Memory:52076 kb
****************************************************************/
