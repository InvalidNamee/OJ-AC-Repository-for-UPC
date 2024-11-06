#include <cstdio>
#include <map>

using namespace std;

map<int, int> a;

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        a[t] = i;
    }
    scanf("%d", &x);
    printf("%d\n", a[x]);
    return 0;
}
/**************************************************************
	Problem: 10144
	Language: C++
	Result: 正确
	Time:99 ms
	Memory:13316 kb
****************************************************************/
