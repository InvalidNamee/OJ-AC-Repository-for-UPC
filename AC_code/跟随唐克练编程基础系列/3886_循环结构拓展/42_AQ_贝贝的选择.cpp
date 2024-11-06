#include <cstdio>
#include <iostream>

using namespace std;

bool check(int n) {
    while (n) {
        if (n % 10 == 6) return true;
        n /= 10;
    }
    return false;
}

int main() {
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        if (check(i)) t++;
    }
    printf("%s\n", t & 1 ? "library" : "playground");
    return 0;
}

/**************************************************************
	Problem: 22528
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
