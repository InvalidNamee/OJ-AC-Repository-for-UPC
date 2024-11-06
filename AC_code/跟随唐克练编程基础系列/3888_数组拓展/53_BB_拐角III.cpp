#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", n + 1 - min(i, j));
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22590
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
