#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, m;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        mp[a] += b;
    }
    int res = 0;
    for (auto i : mp) {
        if (m > i.second) res += i.first * i.second, m -= i.second;
        else {
            res += i.first * m;
            break;
        }
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23085
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1304 kb
****************************************************************/