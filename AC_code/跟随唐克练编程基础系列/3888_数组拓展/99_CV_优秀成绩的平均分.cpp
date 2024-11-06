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
    sort(a, a + n, [](int a, int b) {
        return a > b;
    });
    double s = 0;
    for (int i = 0; i < 5; ++i) {
        s += a[i];
    }
    printf("%.1f\n", s / 5);
    return 0;
}
/**************************************************************
	Problem: 22636
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
