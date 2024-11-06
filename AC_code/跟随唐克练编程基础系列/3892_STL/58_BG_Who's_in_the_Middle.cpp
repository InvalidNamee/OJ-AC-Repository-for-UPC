#include <cstdio>
#include <algorithm>

using namespace std;

int a[10000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    printf("%d\n", a[n >> 1]);
    return 0;
}
/**************************************************************
	Problem: 18322
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1276 kb
****************************************************************/
