#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    printf("%d\n", a + (b - a) * (n - 1));
    return 0;
}

/**************************************************************
	Problem: 23382
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
