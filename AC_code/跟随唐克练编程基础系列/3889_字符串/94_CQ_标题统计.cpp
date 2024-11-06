#include <cstdio>

int main() {
    char c;
    int s = 0;
    while (c = getchar(), c != EOF) {
        if (c == ' ' || c == '\n') continue;
        s++;
    }
    printf("%d\n", s);
    return 0;
}
/**************************************************************
	Problem: 10084
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
