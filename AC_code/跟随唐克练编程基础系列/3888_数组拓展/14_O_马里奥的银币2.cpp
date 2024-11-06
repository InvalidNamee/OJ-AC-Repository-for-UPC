#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        if (i < (n >> 1)) a[i] <<= 1;
        else a[i]++; 
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22551
	Language: C++
	Result: 正确
	Time:2 ms
	Memory:2224 kb
****************************************************************/
