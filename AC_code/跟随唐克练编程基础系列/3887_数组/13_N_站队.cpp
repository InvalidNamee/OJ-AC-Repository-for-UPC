#include <cstdio>
#include <algorithm>

using namespace std;

int a[100];

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 10154
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
