#include <cstdio>

int main() {
    int mx = 0, mxt = 0;
    for (int i = 0; i < 7; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        if (a + b > 8) {
            if (a + b > mx) mx = a + b, mxt = i + 1;
        }
    }
    printf("%d\n", mxt);
    return 0;
}
/**************************************************************
	Problem: 3496
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
