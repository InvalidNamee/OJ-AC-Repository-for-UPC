#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n != 1) printf("%d ", n);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22532
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
