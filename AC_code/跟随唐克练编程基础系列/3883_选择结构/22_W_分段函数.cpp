#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int x;
    scanf("%d", &x);
    if (x < 6) printf("%d\n", x - 12);
    else if (x < 15) printf("%d\n", 3 * x - 1);
    else printf("%d\n", 5 * x + 9);
    return 0;
}
/**************************************************************
	Problem: 8113
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
