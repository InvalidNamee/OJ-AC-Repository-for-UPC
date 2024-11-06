#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%c", s[((j - i * 2) % n + n) % n]);
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 10357
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2224 kb
****************************************************************/
