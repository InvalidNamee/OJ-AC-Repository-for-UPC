#include <cstdio>
#include <algorithm>

using namespace std;

int a[100];

int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    int s = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        s += a[i];
        if (s > x) break;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22577
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
