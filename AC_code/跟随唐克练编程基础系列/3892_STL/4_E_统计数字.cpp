#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }
    for (auto i : mp) {
        printf("%d %d\n", i.first, i.second);
    }
    return 0;
}
/**************************************************************
	Problem: 3475
	Language: C++
	Result: 正确
	Time:57 ms
	Memory:1700 kb
****************************************************************/
