#include <iostream>
#include <vector>

using namespace std;

vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    while (cin >> s, s.back() != '.') {
        v.push_back(s);
    }
    s.pop_back();
    v.push_back(s);
    cin >> s;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == s) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << v.size() << endl;
    return 0;
}
/**************************************************************
	Problem: 22649
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2384 kb
****************************************************************/
