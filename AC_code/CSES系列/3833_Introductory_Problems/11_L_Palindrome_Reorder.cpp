#include <cstdio>
#include <cmath>
#include <cstring>
#include <iostream>
// #define int long long

using namespace std;

int t[30];
char s[1000010], ans[1000010];

signed main() {
    // freopen("data", "r", stdin);
    scanf("%s", s);
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        t[s[i] - 'A'] ++;
    }
    int m = 0, flag = 0;
    for (int i = 0; i < 26; ++i) {
        if ((n & 1) ^ (t[i] & 1)) flag ++;
    }
    // printf("%d\n", flag);
    if ((n & 1) && flag == 25 || !(n & 1) && !flag) {
        for (int i = 0; i < 26; ++i) {
            if (t[i] & 1) {
                t[i] -= 1;
                ans[n >> 1] = i + 'A';
            }
            while (t[i]) {
                ans[m] = i + 'A';
                ans[n - m - 1] = i + 'A';
                m ++;
                t[i] -= 2;
            }
        }
        ans[n] = '\0';
        printf("%s\n", ans);
    }
    else {
        printf("NO SOLUTION\n");
    }
    return 0;
}
/**************************************************************
	Problem: 23003
	Language: C++
	Result: 正确
	Time:98 ms
	Memory:3976 kb
****************************************************************/