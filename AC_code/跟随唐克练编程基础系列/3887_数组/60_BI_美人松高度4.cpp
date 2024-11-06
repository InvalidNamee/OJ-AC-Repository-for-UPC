#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    for (int i = 0; i < n; ++i) {
        int u;
        scanf("%d", &u);
        mp[u]++;
    }
    while (q--) {
        int k;
        scanf("%d", &k);
        printf("%d ", mp[k]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10153
	Language: C++
	Result: 正确
	Time:397 ms
	Memory:39584 kb
****************************************************************/
