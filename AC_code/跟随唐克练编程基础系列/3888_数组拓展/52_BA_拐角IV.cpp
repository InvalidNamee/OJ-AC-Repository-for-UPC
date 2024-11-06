#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) printf("%3d", i);
        for (int j = i + 1; j <= n; ++j) printf("%3d", j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 22589
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
