#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a, b = {0, 0, 0, 0};
    reverse(s.begin(), s.end());
    for (auto i : s) {
        a.push_back(i - '0');
    }
    b.insert(b.end(), a.begin(), a.end());
    b.push_back(0);
    for (int i = 0; i < a.size(); ++i) {
        b[i] += a[i];
    }
    for (int i = 0; i < b.size() - 1; ++i) {
        if (b[i] > 1) b[i] -= 2, b[i + 1] += 1;
    }
    if (b.back() == 0) b.pop_back();
    for (int i = b.size() - 1; i >= 0; --i) {
        cout << b[i];
    }
    cout << endl;
    return 0;
}