#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n) {
    string s = to_string(n);
    if (s.length() != 5 || (s[4] - '0') & 1) return false;
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int main() {
    int n, m, cnt = 0;
    long long s = 0;
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; ++i) {
        if (check(i)) {
            cnt++;
            s += i;
        }
    }
    printf("%d\n%lld\n", cnt, s);
    return 0;
}

/**************************************************************
	Problem: 22471
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2220 kb
****************************************************************/
