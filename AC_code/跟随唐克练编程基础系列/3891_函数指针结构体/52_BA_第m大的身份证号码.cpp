#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), [](string a, string b) {
        return a.substr(6, 8) < b.substr(6, 8);
    });
    cout << v[k - 1] << endl;
    return 0;
}
/**************************************************************
	Problem: 10337
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2396 kb
****************************************************************/
