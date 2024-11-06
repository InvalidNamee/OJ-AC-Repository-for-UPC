#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + 3);
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}
/**************************************************************
	Problem: 13981
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
