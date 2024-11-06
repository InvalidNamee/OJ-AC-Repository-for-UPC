#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int a[100010];
map<int, int> mp;

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        mp[a[i]]++;
    }
    long long cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (mp.find(a[i] - c) != mp.end()) cnt += mp[a[i] - c];
    }
    printf("%lld\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 9751
	Language: C++
	Result: 正确
	Time:44 ms
	Memory:5920 kb
****************************************************************/
