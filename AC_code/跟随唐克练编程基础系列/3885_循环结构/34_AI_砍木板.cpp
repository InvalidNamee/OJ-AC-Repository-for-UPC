#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

int main() {
    int G;
    scanf("%d", &G);
    while (G--) {
        int L, K;
        scanf("%d%d", &L, &K);
        printf(L >= (K + 1) * K / 2 ? "possible\n" : "impossible\n");
    }
    return 0;
}

/**************************************************************
	Problem: 12986
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
