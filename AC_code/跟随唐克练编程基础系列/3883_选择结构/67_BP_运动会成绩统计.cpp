#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    double s;
    scanf("%lf", &s);
    if (s >= 92.8) printf("jin\n");
    else if (s >= 85.6) printf("yin\n");
    else if (s >= 82.1) printf("tong\n");
    else printf("sorry\n");
    return 0;
}
/**************************************************************
	Problem: 22401
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
