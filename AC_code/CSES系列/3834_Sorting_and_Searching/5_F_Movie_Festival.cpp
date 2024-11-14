#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> t;

bool cmp(const pair<int, int> &a,  const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        t.push_back({a, b});
    }
    sort(t.begin(), t.end(), cmp);
    int r = 0;
    for (auto it : t) {
        if (it.first >= r) {
            ans ++;
            r = it.second;   
        }
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23016
	Language: C++
	Result: 正确
	Time:673 ms
	Memory:5188 kb
****************************************************************/
