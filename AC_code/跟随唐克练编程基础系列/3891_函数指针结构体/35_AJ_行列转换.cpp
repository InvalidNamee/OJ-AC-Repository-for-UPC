#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<pair<int, int>, int>> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back({{y, x}, z});
    }
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i.second << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 11603
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2384 kb
****************************************************************/
