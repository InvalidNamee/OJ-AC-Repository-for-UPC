#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        string t = to_string(i), s = t;
        reverse(s.begin(), s.end());
        ans += s == t;
    }
    printf("%d\n", ans);
    return 0;
}

/**************************************************************
	Problem: 10431
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
