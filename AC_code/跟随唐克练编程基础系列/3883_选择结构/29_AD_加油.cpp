#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double m, a, b, c;
    scanf("%lf%lf%lf%lf", &m, &a, &b, &c);
    char flag = 'A';
    double mn = a;
    if (a > b) {
        flag = 'B';
        mn = b;
        if (b > c) flag = 'C', mn = c;
    }
    else if (a > c) {
        flag = 'C';
        mn = c;
    }
    printf("%c %d\n", flag, (int)(mn * m + 0.5));
    return 0;
}
/**************************************************************
	Problem: 1029
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
