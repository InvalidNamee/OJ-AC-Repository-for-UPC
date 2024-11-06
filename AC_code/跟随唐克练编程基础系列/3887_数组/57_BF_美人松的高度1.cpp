#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, q;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int u;
        scanf("%d", &u);
        mp[u]++;
    }
    scanf("%d", &q);
    printf("%d\n", mp[q]);
    return 0;
}
/**************************************************************
	Problem: 10146
	Language: C++
	Result: 正确
	Time:149 ms
	Memory:1304 kb
****************************************************************/
