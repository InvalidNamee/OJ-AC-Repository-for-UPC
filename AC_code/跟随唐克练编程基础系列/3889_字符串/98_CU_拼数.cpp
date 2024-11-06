#include <iostream>
#include <algorithm>

using namespace std;

string a[20];

bool cmp(const string &a, const string &b) {
    return a + b > b + a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 2810
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2392 kb
****************************************************************/
