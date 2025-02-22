#include <iostream>
#include <set>
#include <queue>

using namespace std;

const int N = 100010, M = 200010;
int head[N], ne[M], ver[M], w[M], tot;
bool vis[N];
multiset<long long> dis[N];
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

void add(int x, int y, int z) {
    ver[++tot] = y;
    ne[tot] = head[x];
    head[x] = tot;
    w[tot] = z;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        add(x, y, z);
    }
    dis[1].insert(0);
    q.push({0, 1});
    while (!q.empty()) {
        int x = q.top().second;
        long long tmp = q.top().first;
        q.pop();
        if (tmp > *--dis[x].end()) continue;
        for (int i = head[x]; i; i = ne[i]) {
            int y = ver[i];
            if (dis[y].size() < k) dis[y].insert(tmp + w[i]), q.push({tmp + w[i], y});
            else if (*--dis[y].end() > tmp + w[i]) {
                dis[y].erase(--dis[y].end());
                dis[y].insert(tmp + w[i]);
                q.push({tmp + w[i], y});
            }
        }
    }
    for (long long t : dis[n]) {
        cout << t << ' ';
    }
    cout << endl;
    return 0;
}
/**************************************************************
	Problem: 23081
	Language: C++
	Result: 正确
	Time:445 ms
	Memory:56764 kb
****************************************************************/