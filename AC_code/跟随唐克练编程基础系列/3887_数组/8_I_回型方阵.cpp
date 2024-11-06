#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", min(min(i + 1, n - i), min(j + 1, n - j)));
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 10163
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
