#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    if (t >= 300) t -= 100;
    else if (t >= 200) t -= 60;
    else if (t >= 100) t -= 30;
    printf("%d\n", t);
    return 0;
}
/**************************************************************
	Problem: 1040
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
