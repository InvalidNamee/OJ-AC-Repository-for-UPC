#include <stdio.h>

void Fun(char s[], char t[]) {
    int l;
    for (l = 0; s[l] != '\0'; l++) {
        t[l] = s[l];
    }
    for (int i = 0; i < l; ++i) {
        t[l + i] = s[l - i - 1];
    }
    t[l + l] = '\0';
}

int main() {
    char s[110], t[210];
    scanf("%s", s);
    Fun(s, t);
    printf("%s\n", t);
    return 0;
}
/**************************************************************
	Problem: 3660
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
