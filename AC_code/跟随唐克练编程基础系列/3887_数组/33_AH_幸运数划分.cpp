#include <cstdio>

bool check(int n) {
    if (n <= 0) return false;
    while (n) {
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= (n >> 1); ++i) {
        if (n % i == 0 && (check(i) || check(n / i))) {
            printf("YES\n");
            return 0;
        } 
    }
    printf("NO\n");
    return 0;
}
/**************************************************************
	Problem: 10136
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1236 kb
****************************************************************/
