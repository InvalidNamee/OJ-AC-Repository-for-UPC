#include <iostream>
#include <vector>

using namespace std;

vector<int> ed[200010];
int f[200010];

void dp(int x) {
    for (auto y : ed[x]) {
        dp(y);
        f[x] += 1 + f[y];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        int fa;
        cin >> fa;
        ed[fa].push_back(i);
    }
    dp(1);
    for (int i = 1; i <= n; ++i) {
        cout << f[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23130
	Language: C++
	Result: 正确
	Time:76 ms
	Memory:19140 kb
****************************************************************/