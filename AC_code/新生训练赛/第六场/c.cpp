#include <cstdio>
#include <map>

using namespace std;

const int N = 100010;
int w[N], s[N];
map<int, int> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &w[i]);
        mp[w[i]];
    }
    int m = 0;
    for (auto &i : mp) {
        i.second = ++m;
    }
    for (int i = 0; i < n; ++i) {
        s[mp[w[i]]]++;
    }
    for (int i = m; i; --i) {
        s[i] += s[i + 1];
    }
    long long mx = 0;
    int val = 0;
    for (auto i : mp) {
        if ((long long)s[i.second] * i.first > mx) {
            mx = (long long)s[i.second] * i.first;
            val = i.first;
        }
    }
    printf("%lld %d\n", mx, val);
    return 0;
}