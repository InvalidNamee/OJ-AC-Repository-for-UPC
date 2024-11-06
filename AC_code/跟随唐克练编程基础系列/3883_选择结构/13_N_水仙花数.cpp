#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    int t = n;
    while (t) {
        ans += (t % 10) * (t % 10) * (t % 10);
        t /= 10;
    }
    printf(ans == n ? "YES\n" : "NO\n");
    return 0;
}
/**************************************************************
	Problem: 3234
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
