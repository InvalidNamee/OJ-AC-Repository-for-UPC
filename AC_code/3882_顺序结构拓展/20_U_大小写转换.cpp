#include <iostream>

using namespace std;

int main() {
    char c;
    for (int i = 0; i < 3; ++i) {
        cin >> c;
        cout << (char)(c + 'a' - 'A') << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23376
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
