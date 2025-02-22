#include <iostream>
#include <vector>

using namespace std;

vector<int> ed[200010];
int f[200010][2], res[200010];

void dp(int x, int fa) {
    for (auto y : ed[x]) {
        if (y == fa) continue;
        dp(y, x);
        if (f[x][0] < f[y][0] + 1) f[x][1] = f[x][0], f[x][0] = f[y][0] + 1;
        else if (f[x][1] < f[y][0] + 1) f[x][1] = f[y][0] + 1;
    }
}

void chrt(int x, int fa) {
    for (auto y : ed[x]) {
        if (y == fa) continue;
        int bk[] = {f[y][0], f[y][1]};
        if (f[y][0] + 1 == f[x][0]) {
            if (f[y][0] < f[x][1] + 1) f[y][1] = f[y][0], f[y][0] = f[x][1] + 1;
            else if (f[y][1] < f[x][1] + 1) f[y][1] = f[x][1] + 1;
        }
        else {
            if (f[y][0] < f[x][0] + 1) f[y][1] = f[y][0], f[y][0] = f[x][0] + 1;
            else if (f[y][1] < f[x][0] + 1) f[y][1] = f[x][0] + 1;
        }
        res[y] = f[y][0];
        chrt(y, x);
        f[y][0] = bk[0], f[y][1] = bk[1];
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    dp(1, 0);
    chrt(1, 0);
    res[1] = f[1][0];
    for (int i = 1; i <= n; ++i) {
        cout << res[i] << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23133
	Language: C++
	Result: 正确
	Time:157 ms
	Memory:31120 kb
****************************************************************/