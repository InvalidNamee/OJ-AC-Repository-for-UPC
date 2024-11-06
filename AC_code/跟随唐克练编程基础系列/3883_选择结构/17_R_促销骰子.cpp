#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int n, t = 0;
    while (scanf("%d", &n) != -1) {
        t += n == 6;
    }
    if (t == 0) printf("0\n");
    else if (t == 1) printf("10\n");
    else if (t == 2) printf("100\n");
    else if (t == 3) printf("1000\n");
    else printf("0\n");
    return 0;
}
/**************************************************************
	Problem: 19344
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
