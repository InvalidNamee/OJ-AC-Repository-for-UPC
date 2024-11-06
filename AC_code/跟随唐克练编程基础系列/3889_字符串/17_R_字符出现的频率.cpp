#include <iostream>

using namespace std;

int a[10];

int main() {
    string s;
    getline(cin, s);
    for (auto i : s) {
        if (isdigit(i)) a[i - '0']++;
    }
    for (int i = 0; i < 10; ++i) {
        if (a[i]) cout << i << ':' << a[i] << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 9881
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
