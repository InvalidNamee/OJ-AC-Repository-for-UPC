#include <cstdio>
#include <bitset>
#include <map>

using namespace std;

map<int, bitset<1000>> mp;

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        while (t--) {
            int tt;
            scanf("%d", &tt);
            mp[tt][i] = true;
        }
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        if ((mp[x] & mp[y]).count()) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
/**************************************************************
	Problem: 21430
	Language: C++
	Result: 正确
	Time:20 ms
	Memory:3024 kb
****************************************************************/
