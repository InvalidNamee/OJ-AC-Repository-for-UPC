#include <cstdio>
#include <cctype>

int main() {
    char c;
    bool flag = true;
    while (scanf("%c", &c) == 1) {
        int n;
        if (isdigit(c)) n = c - 48;
        else if (c >= 'A' && c <= 'F') n = c - 'A' + 10;
        else break;
        for (int i = 3; i >= 0; --i) {
            if (n >> i & 1) {
                printf("1");
                flag = false;
            }
            else if (flag) continue;
            else printf("0");
        }
    }
    if (flag) printf("0");
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23833
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/