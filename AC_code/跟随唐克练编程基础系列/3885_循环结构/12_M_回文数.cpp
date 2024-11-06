#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0, j = s.length() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
/**************************************************************
	Problem: 8674
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
