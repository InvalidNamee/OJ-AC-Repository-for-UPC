#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

char f(int w) {
    if (w < 10) return 'A';
    else if (w < 20) return 'B';
    else if (w < 40) return 'C';
    else if (w < 50) return 'D';
    else return 'E';
}

int main() {
    int w;
    scanf("%d", &w);
    putchar(f(w));
    return 0;
}
/**************************************************************
	Problem: 2984
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
