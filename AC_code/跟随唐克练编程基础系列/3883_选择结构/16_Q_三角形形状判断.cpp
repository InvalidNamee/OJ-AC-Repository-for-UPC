#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
    int a[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + 3);    
    if (a[0] + a[1] <= a[2]) printf("non-triangle\n");
    else if (a[0] == a[1] && a[1] == a[2]) printf("equilateral triangle\n");
    else if (a[0] == a[1]) printf("isoceles triangle\n");
    else printf("triangle\n");
    return 0;
}
/**************************************************************
	Problem: 8118
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
