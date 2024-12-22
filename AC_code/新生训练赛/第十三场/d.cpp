#include <iostream>
#include <map>

using namespace std;

map<char, int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        mp[toupper(s[0])]++;
    }
    cout << mp.size() << endl;
    for (auto i : mp) {
        cout << i.first << ' ' << i.second << endl;
    }
    return 0;
}