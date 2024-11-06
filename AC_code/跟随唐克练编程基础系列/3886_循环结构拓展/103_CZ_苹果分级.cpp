#include <cstdio>

int f(int x) {
    if (x >= 70) return 0;
    else if (x >= 60) return 1;
    else if (x >= 50) return 2;
    else return 3;
}

int a[4];

int main() {
    int t = 0, c;
    while (scanf("%d", &c), c >= 20) {
        t++;
        a[f(c)]++;
    }
    printf("%d\n", t);
    for (int i = 0; i < 4; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");   
    return 0;
}
/**************************************************************
	Problem: 1031
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
