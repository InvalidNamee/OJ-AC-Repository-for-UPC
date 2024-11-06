#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    getline(cin, s);
    sort(s.begin(), s.end(), [](char a, char b) {
        return a > b;
    });
    cout << s << endl;
    return 0;
}
/**************************************************************
	Problem: 22629
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2224 kb
****************************************************************/
