#include <iostream>
#include <map>

using namespace std;

int a[26];

int encode(char c) {
    return c - 'a';
}

char decode(int n) {
    return n + 'a';
}

void dfs(int x, int d, const string &s) {
    if (x > d) {
        cout << s << endl;
        return;
    }
    for (int i = 0; i < 26; ++i) {
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
    string s;
    cin >> s;
    for (auto i : s) a[encode(i)]++;
    dfs(1, s.length(), "");
    return 0;
}
/**************************************************************
	Problem: 18348
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2384 kb
****************************************************************/
