#include <cstdio>
#include <iostream>

using namespace std;

int check(long long n) {
    int res = 0;
    while (n) {
        if (!(n % 10 & 1)) res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%ld %d\n", to_string(n).length(), check(n));
    return 0;
}
/**************************************************************
	Problem: 22436
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
