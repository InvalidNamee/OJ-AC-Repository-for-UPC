#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }

    int cnt = 0;
    for (auto i : mp) {
        if (i.second >= i.first) cnt += i.second - i.first;
        else cnt += i.second;
    }
    printf("%d\n", cnt);
    return 0;
}