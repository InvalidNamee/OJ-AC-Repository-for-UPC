#include <cstdio>
#include <cmath>
#include <map>

using namespace std;

map<int, bool> mp;
int n;

bool prime(int n) {
    if (n <= 1) return false;
    else if (mp.find(n) != mp.end()) return mp[n];
    int l = sqrt(n);
    for (int i = 2; i <= l; ++i) {
        if (n % i == 0) return mp[n] = false;
    }
    return mp[n] = true;
}

void dfs(int u, int x) {
    if (u == n + 1) {
        printf("%d\n", x);
    }
    for (int i = 0; i < 10; ++i) {
        if (i == 0 && x == 0) continue;
        if (prime(x * 10 + i)) {
            dfs(u + 1, x * 10 + i);
        }
    }
}

int main() {
    scanf("%d", &n);
    dfs(1, 0);
    return 0;
}
/**************************************************************
	Problem: 8064
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1304 kb
****************************************************************/