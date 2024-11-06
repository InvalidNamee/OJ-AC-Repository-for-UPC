#include <iostream>

using namespace std;

int t[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    getline(cin, s);
    for (auto i : s) {
        if (isupper(i)) t[i - 'A']++;
    }
    int mx = 0;
    for (int i = 0; i < 26; ++i) {
        mx = max(mx, t[i]);
    }
    for (int j = mx; j; --j) {
        for (int i = 0; i < 26; ++i) {
            if (t[i] >= j) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }
    for (int i = 0; i < 26; ++i) {
        printf("%c ", 'A' + i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9860
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
