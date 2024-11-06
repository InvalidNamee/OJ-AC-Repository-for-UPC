#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%d", &a[i]);
    }
    int flag = 0;
    for (int i = 0; i < 3; ++i) {
        flag += a[i] >= 90;
    }
    if (flag > 1 && a[3] >= 85) printf("Qualified\n");
    else printf("Not qualified\n");
    return 0;
}
/**************************************************************
	Problem: 20241
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
