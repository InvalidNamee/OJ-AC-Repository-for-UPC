#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, c;
    long long cnt = 0;
    scanf("%d%d", &n, &c);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        cnt += mp[t - c];
        mp[t]++;
    }
    printf("%lld\n", cnt);
    return 0;
}