#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

vector<long long> a;

bool check(long long t) {
    string tmp = to_string(t);
    return tmp.find('7') != -1 && tmp.find('5') != -1 && tmp.find('3') != -1;
}

void dfs(int d, long long res) {
    if (check(res))
        a.push_back(res);
    if (d == 10) {
        return;
    }
    dfs(d + 1, res * 10 + 5);
    dfs(d + 1, res * 10 + 3);
    dfs(d + 1, res * 10 + 7);
}


int main() {
    dfs(1, 0);
    int n, cnt = 0;
    scanf("%d", &n);
    for (auto i : a) {
        if (i <= n) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}