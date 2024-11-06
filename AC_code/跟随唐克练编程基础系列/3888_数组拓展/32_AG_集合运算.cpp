#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> a, b, c;
map<int, int> mp;

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a.push_back(t);
        c.push_back(t);
        mp[t]++;
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int t;
        scanf("%d", &t);
        b.push_back(t);
        c.push_back(t);
        mp[t]++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (auto i : mp) {
        if (i.second == 2) printf("%d ", i.first);
    }    
    printf("\n");
    for (auto i : mp) {
        printf("%d ", i.first);
    }
    printf("\n");
    for (auto i : a) {
        if (mp[i] == 1) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22569
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1500 kb
****************************************************************/
