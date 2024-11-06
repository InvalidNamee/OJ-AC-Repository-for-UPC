#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char c = getchar();
    printf("%d\n", isupper(c) ? c - 'A' + 1 : c - 'a' + 1);
    return 0;
}
/**************************************************************
	Problem: 5235
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
