#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t = 0;
    for (int i = 0; i < 4; ++i) {
        int tmp;
        scanf("%d", &tmp);
        t += tmp;
    }
    t = min(t, 4 - t);
    if (!t) printf("0\n");
    else if (t == 1) printf("1\n");
    else printf("2\n");
    return 0;
}

/**************************************************************
	Problem: 22860
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
