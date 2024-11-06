#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }
    for (int i = 0; i < m; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }
    for (auto i : mp) {
        printf("%d ", i.first);
    }
    printf("\n");
    for (auto i : mp) {
        if (i.second == 2) printf("%d ", i.first);
    }    
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22576
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1304 kb
****************************************************************/
