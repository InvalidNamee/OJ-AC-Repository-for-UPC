#include <cstdio>
#include <map>

using namespace std;

map<int, bool> mp;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        int u;
        scanf("%d", &u);
        mp[u] = true;
    }
    while (m--) {
        int q;
        scanf("%d", &q);
        if (mp.find(q) != mp.end()) printf("1 ");
        else printf("0 ");
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10147
	Language: C++
	Result: 正确
	Time:769 ms
	Memory:39848 kb
****************************************************************/
