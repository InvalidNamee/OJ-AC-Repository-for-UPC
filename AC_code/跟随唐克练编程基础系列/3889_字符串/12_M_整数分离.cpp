#include <iostream>
#include <cstdio>

using namespace std;

inline int read() {
    int res = 0;
    char c = getchar();
    while (!isdigit(c)) {
        if (c == EOF) return EOF;
        c = getchar();
    }
    while (isdigit(c)) res = res * 10 + c - 48, c = getchar();
    return res;
}

int main() {
    int a;
    while (a = read(), a != EOF) {
        cout << a << endl;
    } 
    return 0;
}
/**************************************************************
	Problem: 9886
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2220 kb
****************************************************************/
