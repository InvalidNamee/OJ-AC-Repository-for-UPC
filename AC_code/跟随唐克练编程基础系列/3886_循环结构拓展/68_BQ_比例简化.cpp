#include <cstdio>

int main() {
    int a, b, l;
    int _a = 100, _b = 1;
    scanf("%d%d%d", &a, &b, &l);
    for (int i = 0; i <= l; ++i) {
        for (int j = 1; j <= l; ++j) {
            if ((double)i / j >= (double)a / b && (double)i / j - (double)a / b < (double)_a / _b - (double)a / b) {
                _a = i, _b = j;                
            }
        }
    }
    printf("%d %d\n", _a, _b);
    return 0;
}
/**************************************************************
	Problem: 1731
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
