#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string a[3];
    cin >> a[0] >> a[1] >> a[2];
    for (int i = 0; i < 3; ++i) reverse(a[i].begin(), a[i].end());
    int ls = 0;
    while (true) {
        if (a[ls].empty()) {
            cout << (char)('A' + ls) << endl;
            return 0;
        }
        int t = a[ls].back() - 'a';
        a[ls].pop_back();
        ls = t;
    }
    return 0;
}

/**************************************************************
	Problem: 6466
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
