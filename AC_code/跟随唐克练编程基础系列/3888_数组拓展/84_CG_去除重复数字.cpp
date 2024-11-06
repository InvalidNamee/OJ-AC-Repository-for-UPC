#include <cstdio>
#include <set>

using namespace std;

set<int> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s.insert(t);
    }
    printf("%ld\n", s.size());
    for (auto i : s) printf("%d\n", i);
    return 0;
}
/**************************************************************
	Problem: 22621
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:1304 kb
****************************************************************/
