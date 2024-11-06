#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int waste(int n, int a) {
    return (a - n % a) % a;
}

int main() {
    int n, a, b;
    scanf("%d%d%d", &n, &a, &b);
    printf("%d\n", min(waste(n, a), waste(n, b)));
    return 0;
}
/**************************************************************
	Problem: 13988
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
