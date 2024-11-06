#include <iostream>
#include <vector>

using namespace std;

vector<int> ans;
int a[100];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, mx = -0x3f3f3f3f, mn = 0x3f3f3f3f;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        mx = max(mx, a[i]);
        if (mn > a[i]) {
            ans.clear();
            ans.push_back(i + 1);
            mn = a[i];
        }
        else if (mn == a[i]) ans.push_back(i + 1);
    }
    cout << mx - mn << endl;
    for (auto i : ans) cout << i << ' ';
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 22639
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2380 kb
****************************************************************/
