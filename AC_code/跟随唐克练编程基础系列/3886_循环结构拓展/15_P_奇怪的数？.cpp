#include <cstdio>

bool check(int n) {
    return (n & 1) && n / 1000 == n / 10 % 10 && n / 100 % 10 == n % 10;    
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1000; i <= n; ++i) {
        if (check(i)) printf("%d\n", i);
    }
    return 0;
}
/**************************************************************
	Problem: 22444
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
