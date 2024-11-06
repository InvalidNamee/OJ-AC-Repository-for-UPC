#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    string s = to_string(n);
    if (s.length() != 3) return false;
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int n, m, cnt = 0;
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; ++i) {
        if (check(i)) {
            cnt++;
            printf("%d\n", i);
        }
    }
    printf("%d\n", cnt);
    return 0;
}

/**************************************************************
	Problem: 22472
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
