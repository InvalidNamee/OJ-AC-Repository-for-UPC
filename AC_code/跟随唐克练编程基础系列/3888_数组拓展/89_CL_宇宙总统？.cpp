#include <cstdio>

int t[110];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        t[tmp]++;
    }
    int p = 0;
    for (int i = 1; i <= 100; ++i) {
        if (t[i] >= t[p]) p = i;
    }
    printf("%d\n", p);
    return 0;
}
/**************************************************************
	Problem: 22626
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
