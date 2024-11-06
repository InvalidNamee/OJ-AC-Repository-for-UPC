#include <cstdio>
#include <cmath>

int main() {
    int n;
    int a = 0, b = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (t >= 80) a++;
        if (t >= 60) b++;
    }
    if ((double)a / n >= 0.6 && (double)b / n >= 0.95) printf("Yes\n");
    else printf("No\n");
    return 0;
}
/**************************************************************
	Problem: 1034
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
