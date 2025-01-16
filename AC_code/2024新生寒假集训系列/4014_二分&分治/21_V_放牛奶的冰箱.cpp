#include <cstdio>
#include <set>

using namespace std;

multiset<int> s;
int a[1000010];
int n, h;
int pre;

bool check(int mid) {
    if (mid > pre) {
        for (int i = pre + 1; i <= mid; ++i) s.insert(a[i]);
    }
    else {
        for (int i = pre; i > mid; --i) s.erase(s.find(a[i]));
    }
    pre = mid;
    bool t = 0;
    int hh = 0;
    if (mid & 1) {
        hh = *s.begin();
        auto it = ++s.begin();
        while (it != s.end()) {
            if (t) hh += *it;  
            t ^= 1;
            ++it;
        }
    }
    else {
        for (auto i : s) {
            if (t) hh += i;
            t ^= 1;
        }
    }
    return hh <= h;
}

int main() {
    scanf("%d%d", &n, &h);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int l = 0, r = n;
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    printf("%d\n", l);
    return 0;
}
/**************************************************************
	Problem: 15044
	Language: C++
	Result: 正确
	Time:559 ms
	Memory:28708 kb
****************************************************************/