#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

bool leap(int s) {
    int t = s / 10000;
    if (t % 100 == 0) return t % 400 == 0;
    else return t % 4 == 0;
}

int day(int s) {
    int t = s / 100 % 100;
    if (t == 4 || t == 6 || t == 9 || t == 11) return 30;
    else if (t == 2) return leap(s) ? 29 : 28;
    else return 31;
}

void nxt(int &s) {
    int d = day(s);
    if (s % 100 == d) s = (s / 100 + 1) * 100 + 1;
    else s += 1;
    if (s / 100 % 100 > 12) s = s / 10000 * 10000 + 10100 + s % 100;
}

bool check(int s) {
    string s1 = to_string(s), s2 = s1;
    reverse(s2.begin(), s2.end());
    return s1 == s2;
}

int main() {
    int l, r, ans = 0;
    scanf("%d%d", &l, &r);
    for (int i = l; i <= r; nxt(i)) {
        if (check(i)) ans++; 
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 3108
	Language: C++
	Result: 正确
	Time:168 ms
	Memory:2224 kb
****************************************************************/
