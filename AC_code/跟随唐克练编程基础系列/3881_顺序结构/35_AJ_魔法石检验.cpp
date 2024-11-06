#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    while (n) {
        printf("%d ", n % 10);
        n /= 10;
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 2983
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
