#include <cstdio>
#include <set>
#include <vector>

using namespace std;

multiset<int> s, a;

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    s.insert(x);
    a.insert(x), a.insert(0);
    for (int i = 1; i <= n; ++i) {
        int p;
        scanf("%d", &p);
        auto h = a.upper_bound(p);
        auto t = h;
        --h;
        int len = *t - *h;
        s.erase(s.find(len));
        s.insert(p - *h), s.insert(*t - p);
        a.insert(p);
        printf("%d ", *--s.end());
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23024
	Language: C++
	Result: 正确
	Time:6622 ms
	Memory:20692 kb
****************************************************************/
