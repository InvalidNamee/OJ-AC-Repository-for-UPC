#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] == '-' || s.length() > 5) printf("Invalid input\n");
    else {
        cout << s.length() << endl;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 8117
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
