#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 64) printf("18446744073709551615\n");
    else printf("%lld\n", (1LL << n) - 1);
    return 0;
}

/**************************************************************
	Problem: 9855
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
