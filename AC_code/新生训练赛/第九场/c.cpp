#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check(vector<int> a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i] % a[0]) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());
        if (a[0] != a[1] || check(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
