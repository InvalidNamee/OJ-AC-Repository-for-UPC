#include <iostream>

using namespace std;

int cnt[10][10];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cnt[to_string(i)[0] - 48][i % 10]++;
    }
    long long res = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            // cout << cnt[i][j] << ' ';
            res += cnt[i][j] * cnt[j][i];
        }
    }
    cout << res << endl;
    return 0;
}