#include <cstdio>
#include <algorithm>

using namespace std;

int a[100010];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 2215
	Language: C++
	Result: 正确
	Time:30 ms
	Memory:1628 kb
****************************************************************/