#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (auto i : s) {
        if (i == ',') cout << ' ';
        else cout << i;
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 6676
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
