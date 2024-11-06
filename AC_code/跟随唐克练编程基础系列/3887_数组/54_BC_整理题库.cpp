#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

multiset<int> s;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n + m; ++i) {
        int u;
        scanf("%d", &u);
        s.insert(u);
    }
    for (auto i : s) printf("%d ", i);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10141
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2224 kb
****************************************************************/
