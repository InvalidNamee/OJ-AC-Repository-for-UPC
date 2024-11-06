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
    for (int i = 2; i < n; ++i) {
        if (a[i - 2] + a[i - 1] > a[i]) {
            printf("%d %d %d\n", a[i - 2], a[i - 1], a[i]);
            return 0;
        }
    }
    printf("Impossible\n");
    return 0;
}
/**************************************************************
	Problem: 21338
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
