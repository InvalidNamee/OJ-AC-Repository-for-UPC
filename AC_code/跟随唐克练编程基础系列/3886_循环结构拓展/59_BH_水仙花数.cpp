#include <cstdio>
#include <cmath>

bool check(int n) {
    return n == (int)pow(n % 10, 3) + (int)pow(n / 10 % 10, 3) + (int)pow(n / 100, 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf(check(n) ? "YES\n" : "NO\n");
    return 0;
}
/**************************************************************
	Problem: 3234
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1252 kb
****************************************************************/
