#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; n != 1; ++i) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 12995
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/