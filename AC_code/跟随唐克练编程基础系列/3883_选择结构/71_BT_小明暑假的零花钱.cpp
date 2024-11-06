#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 90) printf("%d\n", n * 3);
    else if (n >= 80) printf("%d\n", n * 2);
    else if (n >= 70) printf("%d\n", n);
    else printf("50\n");
    return 0;
}
/**************************************************************
	Problem: 22405
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
