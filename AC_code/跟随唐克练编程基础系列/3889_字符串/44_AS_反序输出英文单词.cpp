#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s) {
        v.push_back(s);
    }
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << v[i] << ' ';
    }
    return 0;
}
/**************************************************************
	Problem: 9852
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
