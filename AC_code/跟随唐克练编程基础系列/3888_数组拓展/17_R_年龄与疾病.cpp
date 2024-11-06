#include <cstdio>

int classify(int n) {
    if (n <= 18) return 0;
    else if (n <= 35) return 1;
    else if (n <= 60) return 2;
    else return 3;
}

int a[4];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        a[classify(t)]++;
    }
    for (int i = 0; i < 4; ++i) {
        printf("%d %.2f%%\n", a[i], (double)a[i] / n * 100);
    }
    return 0;
}
/**************************************************************
	Problem: 22554
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:1236 kb
****************************************************************/
