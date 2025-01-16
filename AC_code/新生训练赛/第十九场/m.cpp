#include <iostream>
#include <algorithm>

using namespace std;

pair<string, int> a[15010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n, [](pair<string, int> a, pair<string, int> b) {
        return a.first.size() == b.first.size() ? a.second < b.second : a.first.size() > b.first.size();
    });
    for (int i = 0; i < n; ++i) {
        cout << a[i].first << endl;
    }
    return 0;
}