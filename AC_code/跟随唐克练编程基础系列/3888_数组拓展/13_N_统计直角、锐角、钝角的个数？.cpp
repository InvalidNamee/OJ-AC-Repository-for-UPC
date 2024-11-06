#include <cstdio>

int judge(int x) {
    if (x == 90) return 0;
    else if (x < 90) return 1;
    else return 2;
}

int c[3];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        c[judge(t)]++;
    }
    for (int i = 0; i < 3; ++i) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22550
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:1236 kb
****************************************************************/
