#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int mx = 0;
    for (int i = 0; i < 5; ++i) {
        int t;
        scanf("%d", &t);
        mx = max(mx, t);
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 22393
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
