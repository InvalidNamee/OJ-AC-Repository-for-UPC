#include <cstdio>
#include <algorithm>

using namespace std;

int a[1010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    sort(a + 1, a + n + 1, [](int a, int b) {
        return a > b;
    });
    printf("%d\n", a[x]);
    return 0;
}
/**************************************************************
	Problem: 22627
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1240 kb
****************************************************************/
