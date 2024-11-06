#include <iostream>

using namespace std;

bool v[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    cin >> s;
    for (auto i : s) {
        if (!v[i]) {
            v[i] = true;
            cout << i;
        }
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 9877
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
