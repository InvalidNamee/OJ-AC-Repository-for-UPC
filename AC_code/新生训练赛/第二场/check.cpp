#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> vec;

const int N = 100;
int ver[N], ne[N], w[N], head[N], tot;

void add(int x, int y, int z) {
    ver[++tot] = y;
    w[tot] = z;
    ne[tot] = head[x];
    head[x] = tot;
}

int r = 0;

void dfs(int x, int t) {
    if (x == t) {
        vec.push_back(r);
        return;
    }
    for (int i = head[x]; i; i = ne[i]) {
        r += w[i];
        dfs(ver[i], t);
        r -= w[i];
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        add(x, y, z);
    }
    dfs(1, n);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); ++i) {
        if (i != vec[i]) {
            printf("%d expected to be %d\n", vec[i], i);
            return 0;
        }
    }
    printf("yes!!!\n");
    return 0;
}