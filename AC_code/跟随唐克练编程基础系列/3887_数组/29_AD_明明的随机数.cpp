#include <cstdio>
#include <algorithm>

using namespace std;

int a[100];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    n = unique(a, a + n) - a;
    printf("%d\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 3561
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
