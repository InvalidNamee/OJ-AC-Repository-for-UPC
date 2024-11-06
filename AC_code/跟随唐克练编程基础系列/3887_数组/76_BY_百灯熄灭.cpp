#include <cstdio>
#include <iostream>

using namespace std;

bool s[101];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; i * j <= n; ++j) {
            s[i * j] = !s[i * j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (s[i]) cnt++;
    }
    printf("%d\n", cnt);
    for (int i = 1; i <= n; ++i) {
        if (s[i]) printf("%4d", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9821
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
