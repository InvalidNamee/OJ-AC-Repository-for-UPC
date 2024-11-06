#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int mx = -0x3f3f3f3f;
    for (int i = 0; i < 4; ++i) {
        int t;
        scanf("%d", &t);
        mx = max(mx, t);
    }
    printf("%d\n", mx);
    return 0;
}
/**************************************************************
	Problem: 22397
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
