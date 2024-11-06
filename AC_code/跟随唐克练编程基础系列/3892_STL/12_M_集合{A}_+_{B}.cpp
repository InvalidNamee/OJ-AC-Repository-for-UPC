#include <cstdio>
#include <set>

using namespace std;

set<int> s;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n + m; ++i) {
        int t;
        scanf("%d", &t);
        s.insert(t);
    }
    for (auto i : s) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 7807
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:1436 kb
****************************************************************/
