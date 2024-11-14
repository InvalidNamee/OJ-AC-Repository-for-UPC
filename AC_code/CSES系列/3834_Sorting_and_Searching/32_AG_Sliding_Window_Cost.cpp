#include <cstdio>
#include <set>
#define int long long

using namespace std;

set<pair<int, int>> s1, s2;
int a[200010];

void print() {
    for (auto i : s1) printf("%lld ", i.first);
    printf("| ");
    for (auto i : s2) printf("%lld ", i.first);
    printf("\n");
}

int calc(int ls, int rs, int k, int mid) {
    return rs - (k >> 1) * mid + (k - (k >> 1)) * mid - ls;
}

signed main() {
    int n, k;
    int ls = 0, rs = 0;
    scanf("%lld%lld", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%lld", &a[i]);
    }
    s1.insert({0, 0}), s2.insert({1000000010, 200010});
    for (int i = 1; i <= k; ++i) {
        s1.insert({a[i], i});
        ls += a[i];
    }
    for (int i = 1; i <= (k >> 1); ++i) {
        auto t = --s1.end();
        ls -= t->first;
        rs += t->first;
        s2.insert(*t);
        s1.erase(t);
    }
    // print();
    printf("%lld ", calc(ls, rs, k, (*--s1.end()).first));
    for (int i = k + 1; i <= n; ++i) {
        if (s1.find({a[i - k], i - k}) != s1.end()) {
            s1.erase({a[i - k], i - k});
            ls -= a[i - k];
        }
        else {
            s2.erase({a[i - k], i - k});
            rs -= a[i - k];
        }
        if (a[i] > (*--s1.end()).first) s2.insert({a[i], i}), rs += a[i];
        else s1.insert({a[i], i}), ls += a[i];
        while ((int)s1.size() - (int)s2.size() > 1) {
            auto t = --s1.end();
            ls -= t->first;
            rs += t->first;
            s2.insert(*t);
            s1.erase(t);
        }
        while (s1.size() < s2.size()) {
            auto t = s2.begin();
            ls += t->first;
            rs -= t->first;
            s1.insert(*t);
            s2.erase(t);
        }
        printf("%lld ", calc(ls, rs, k, (*--s1.end()).first));
        // print();
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23046
	Language: C++
	Result: 正确
	Time:5382 ms
	Memory:16052 kb
****************************************************************/
