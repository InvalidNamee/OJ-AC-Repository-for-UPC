#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%3d", min(i, n - j + 1));
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22588
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
