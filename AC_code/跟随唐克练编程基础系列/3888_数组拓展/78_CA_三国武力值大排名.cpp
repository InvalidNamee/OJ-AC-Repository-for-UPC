#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a, b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        a.clear();
        b.clear();
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int t;
            cin >> t;
            a.push_back(t);
        }
        for (int i = 0; i < n; ++i) {
            int t;
            cin >> t;
            b.push_back(t);
        }
        sort(a.begin(), a.end(), [](int a, int b) {
            return a > b;
        });
        sort(b.begin(), b.end(), [](int a, int b) {
            return a > b;
        });
        for (int i = 0; i < n; ++i) cout << a[i] + b[i] << ' ';
        cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 22615
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
