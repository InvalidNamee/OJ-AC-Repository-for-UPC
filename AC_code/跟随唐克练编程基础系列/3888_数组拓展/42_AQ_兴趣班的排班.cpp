#include <cstdio>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n, s = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        s = s * t / gcd(s, t);
    }
    printf("%d\n", s + 1);
    return 0;
}
/**************************************************************
	Problem: 22579
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
