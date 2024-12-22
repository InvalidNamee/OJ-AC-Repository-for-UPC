#include <cstdio>
#include <cctype>

int main() {
    char s[7];
    int num = 0, sum = 0;
    scanf("%s", s);
    for (int i = 0; i < 6; ++i) {
        if (isdigit(s[i])) num = num * 10 + s[i] - 48;
        else sum += s[i];
    }
    printf("%02d\n", (sum + num) % 100);
    return 0;
}