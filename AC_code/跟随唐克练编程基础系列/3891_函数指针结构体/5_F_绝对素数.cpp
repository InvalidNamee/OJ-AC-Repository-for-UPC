#include <cstdio>
#include <cmath>

int rev(int n) {
    int res = 0;
    while (n) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

bool prime(int n) {
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if (prime(n) && prime(rev(n))) printf("It's a Absolute Prime number.\n");
    else printf("It's not a Absolute Prime number.\n");
    return 0;
}
/**************************************************************
	Problem: 2986
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
