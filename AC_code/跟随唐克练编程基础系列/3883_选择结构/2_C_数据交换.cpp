#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    cout << a << ' ' << b << endl;
    return 0;
}
/**************************************************************
	Problem: 1629
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
