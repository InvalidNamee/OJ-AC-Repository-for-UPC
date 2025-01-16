#include <cstdio>
#include <map>
#include <set>

using namespace std;

map<int, int> mp;
multiset<int> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }
    for (auto i : mp) {
        if (i.second >= 4) s.insert(i.first), s.insert(i.first);
        else if (i.second >= 2) s.insert(i.first);
    }
    if (s.size() < 2) {
        printf("0\n");
    }
    else {
        printf("%lld\n", (long long)*--s.end() * *----s.end());
    }
    return 0;
}