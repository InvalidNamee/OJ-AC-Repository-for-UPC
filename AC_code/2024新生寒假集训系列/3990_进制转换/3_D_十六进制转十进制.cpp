#include <cstdio>
#include <cctype>

int main() {
    long long ans = 0;
    char s[11];
    scanf("%s", s);
    for (int i = 0; s[i] != 0; ++i) {
        if (isdigit(s[i])) ans = ans * 16 + s[i] - '0';
        else ans = ans * 16 + s[i] - 'A' + 10;
    }
    printf("%lld\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23822
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/