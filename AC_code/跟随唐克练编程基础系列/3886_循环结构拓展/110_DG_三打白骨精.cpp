#include <cstdio>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    for (int i = 0; i <= c / a; ++i) {
        for (int j = 0; j <= c / b; ++j) {
            if (i * a + j * b == c) {
                printf("Yes\n");
                return 0;
            }
        }
    }
    printf("No\n");
    return 0;
}
/**************************************************************
	Problem: 21284
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:1236 kb
****************************************************************/
