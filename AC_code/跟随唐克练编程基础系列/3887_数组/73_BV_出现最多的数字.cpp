#include <cstdio>
#include <iostream>

using namespace std;

int t[10];

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    string s;
    getline(cin, s);
    for (auto i : s) if (isdigit(i)) t[i - 48]++;
    int mx = 0;
    for (int i = 0; i < 10; ++i) {
        mx = mx > t[i] ? mx : t[i];
    }
    printf("%d\n", mx);
    for (int i = 0; i < 10; ++i) {
        if (mx == t[i]) printf("%2d", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9824
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
