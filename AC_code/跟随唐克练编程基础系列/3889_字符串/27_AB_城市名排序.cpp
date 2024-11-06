#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    vector<string> a;
    int n;
    cin >> n;
    while (n--) {
        string t;
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    for (auto i : a) cout << i << endl;
    return 0;
}
/**************************************************************
	Problem: 9869
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2388 kb
****************************************************************/
