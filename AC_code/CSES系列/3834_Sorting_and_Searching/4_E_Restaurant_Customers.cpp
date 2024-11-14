#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<pair<int, int>> t;
vector<int> vec;
unordered_map<int, int> mp;
int s[400010];

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        vec.push_back(a), vec.push_back(b);
        t.push_back({a, b});
    }
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (int i = 1; i <= vec.size(); ++i) {
        mp[vec[i -  1]] = i;
    }
    for (auto it : t) {
        s[mp[it.first]] ++;
        s[mp[it.second] + 1] --;
    }
    for (int i = 1; i <= vec.size(); ++i) {
        s[i] += s[i - 1];
        ans = max(ans, s[i]);
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 23015
	Language: C++
	Result: 正确
	Time:1565 ms
	Memory:24252 kb
****************************************************************/
