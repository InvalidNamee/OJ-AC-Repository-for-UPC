#include <iostream>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        mp[t]++;
    }
    for (auto i : mp) {
        if (i.second > n / 2) {
            cout << i.first << endl;
            return 0;
        }
    }
    return 0;
}