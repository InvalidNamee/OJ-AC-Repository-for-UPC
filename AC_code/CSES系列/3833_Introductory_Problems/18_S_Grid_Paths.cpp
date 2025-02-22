#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool v[7][7];
string s;
int tot = -1, ans;

bool valid(int x, int y) {
    if (x >= 0 && x < 7 && y >= 0 && y < 7) return true;
    else return false;
}

bool judge(int x, int y) {
    return !valid(x, y) | v[x][y];
}

void dfs(int x, int y) {
    if (x == 6 && y == 0) {
        if (tot == 47) ans++;
        return; 
    }
    if (judge(x + 1, y) && judge(x - 1, y) && !judge(x, y - 1) && !judge(x, y + 1)) return;
    if (!judge(x + 1, y) && !judge(x - 1, y) && judge(x, y - 1) && judge(x, y + 1)) return;
    v[x][y] = true;
    tot ++;
    if ((s[tot] == '?' || s[tot] == 'U') && !judge(x - 1, y)) {
        dfs(x - 1, y);
    }
    if ((s[tot] == '?' || s[tot] == 'D') && !judge(x + 1, y)) {
        dfs(x + 1, y);
    }
    if ((s[tot] == '?' || s[tot] == 'L') && !judge(x, y - 1)) {
        dfs(x , y - 1);
    }
    if ((s[tot] == '?' || s[tot] == 'R') && !judge(x, y + 1)) {
        dfs(x, y + 1);
    }
    tot --;
    v[x][y] = false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> s;
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}
/**************************************************************
	Problem: 23010
	Language: C++
	Result: 正确
	Time:717 ms
	Memory:2384 kb
****************************************************************/