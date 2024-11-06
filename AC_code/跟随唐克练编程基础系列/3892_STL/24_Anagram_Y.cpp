#include <iostream>
#include <map>

using namespace std;

int a[52];

int encode(char c) {
    if (isupper(c)) return c - 'A' << 1;
    else return c - 'a' << 1 | 1;
}

char decode(int n) {
    return n & 1 ? (n >> 1) + 'a' : (n >> 1) + 'A';
}

void dfs(int x, int d, const string &s) {
    if (x > d) {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < 52; ++i) {
        if (a[i]) {
            a[i]--;
            dfs(x + 1, d, s + decode(i));
            a[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        for (int i = 0; i < 52; ++i) a[i] = 0;
        string s;
        cin >> s;
        for (auto i : s) a[encode(i)]++;
        dfs(1, s.length(), "");
    }
    return 0;
}
/**************************************************************
	Problem: 18247
	Language: C++
	Result: 正确
	Time:41 ms
	Memory:2384 kb
****************************************************************/
