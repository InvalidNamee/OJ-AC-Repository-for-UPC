#include <cstdio>
#include <algorithm>

using namespace std;

int a[100];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] < 10) a[i] = 12;
        while (a[i] % 4) a[i]++;
    }
    sort(a, a + n, [](int a, int b) {
        return a > b;
    });
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22578
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
