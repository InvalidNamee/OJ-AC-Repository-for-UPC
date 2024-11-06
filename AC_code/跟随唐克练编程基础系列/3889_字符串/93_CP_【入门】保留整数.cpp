#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char c = getchar();
    bool flag = true;
    while (flag) {
        while (flag && isdigit(c)) {
            putchar(c);
            c = getchar();
            if (c == EOF) {
                flag = false;
            }
        }
        if (!flag) break;
        putchar('*');
        while (flag && !isdigit(c)) {
            c = getchar();
            if (c == EOF) {
                flag = false;
            }
        }           
    }
    putchar('\n');
    return 0;
}
/**************************************************************
	Problem: 22663
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2220 kb
****************************************************************/
