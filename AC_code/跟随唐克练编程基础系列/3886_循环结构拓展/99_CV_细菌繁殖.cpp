#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    long long a, b;
    scanf("%lld%lld", &a, &b);
    printf("%lld\n", a * ((1 << b) - 1));
    return 0;
}
/**************************************************************
	Problem: 1014
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
