#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_map>

using namespace std;

int a[200010], ans[200010];
vector<int> p[200010];
vector<int> dat;
unordered_map<int, int> mp;
set<int> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        dat.push_back(a[i]);
    }
    sort(dat.begin(), dat.end());
    dat.erase(unique(dat.begin(), dat.end()), dat.end());
    for (int i = 1; i <= dat.size(); ++i) {
        mp[dat[i - 1]] = i;
    }
    for (int i = 1; i <= n; ++i) {
        a[i] = mp[a[i]];
        p[a[i]].push_back(i);
    }
    for (int i = 1; i <= dat.size(); ++i) {
        for (auto it : p[i]) {
            set<int>::iterator t;
            if (s.empty() || (t = s.lower_bound(it), t == s.begin())) {
                ans[it] = 0;
            }
            else {
                ans[it] = *(--t);
            }
        }
        for (auto it : p[i]) s.insert(it);
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 23034
	Language: C++
	Result: 正确
	Time:3879 ms
	Memory:33208 kb
****************************************************************/
