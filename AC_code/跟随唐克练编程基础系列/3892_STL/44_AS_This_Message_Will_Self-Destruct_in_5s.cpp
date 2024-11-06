#include <map>
#include <cstdio>

using namespace std;

map<int, int> mp;

int main() {
    int n;
    long long cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (mp.find(t - i) != mp.end()) cnt += mp[t - i];
        mp[-t - i]++;
    }
    printf("%lld\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 15714
	Language: C++
	Result: 正确
	Time:163 ms
	Memory:10676 kb
****************************************************************/
