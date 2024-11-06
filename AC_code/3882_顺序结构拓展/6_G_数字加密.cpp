#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; --i) {
        printf("%d", '9' - s[i]);
    }
    printf("\n");
    return 0;
}

/**************************************************************
	Problem: 21188
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
