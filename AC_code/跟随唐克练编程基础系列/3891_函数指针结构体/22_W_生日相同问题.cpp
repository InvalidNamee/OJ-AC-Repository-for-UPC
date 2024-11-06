#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> a[416];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        string s;
        int t, tt;
        cin >> s;
        scanf("%d%d", &t, &tt);
        a[t * 32 + tt].push_back(s);
    }
    bool f = true;
    for (int i = 1; i <= 415; ++i) {
        if (a[i].empty()) continue;
        else if (a[i].size() == 1) continue;
        f = false;
        sort(a[i].begin(), a[i].end(), [](string a, string b) {
            return a.length() == b.length() ? a < b : a.length() < b.length();
        });
        printf("%d %d ", i / 32, i % 32);
        for (auto j : a[i]) cout << j << ' ';
        printf("\n");
    }
    if (f) printf("None\n");
    return 0;
}
/**************************************************************
	Problem: 11561
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2248 kb
****************************************************************/
