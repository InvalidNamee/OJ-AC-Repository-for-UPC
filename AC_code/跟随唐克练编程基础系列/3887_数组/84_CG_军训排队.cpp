#include <cstdio>
#include <algorithm>

using namespace std;

int a[1010];

int main() {
    int n, h;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &h);
    a[++n] = h;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9829
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
