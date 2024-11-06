#include <iostream>

using namespace std;

string a[50], b[50];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < n; ++i) {
        bool flag = true;
        for (int j = 0; j < m; ++j) {
            if (a[i] == b[j]) {
                flag = false;
                cout << "YES" << endl;
                break;
            }
        }
        if (flag) cout << "NO" << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 11105
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2388 kb
****************************************************************/
