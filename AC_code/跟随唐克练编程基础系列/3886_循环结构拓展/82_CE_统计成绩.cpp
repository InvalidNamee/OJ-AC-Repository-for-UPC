#include <cstdio>

int a[4];

int f(int t) {
    if (t >= 90) return 0;
    else if (t >= 80) return 1;
    else if (t >= 60) return 2;
    else return 3;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        a[f(t)]++;
    }
    for (int i = 0; i < 4; ++i) printf("%d\n", a[i]);
    return 0;
}
/**************************************************************
	Problem: 10096
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
