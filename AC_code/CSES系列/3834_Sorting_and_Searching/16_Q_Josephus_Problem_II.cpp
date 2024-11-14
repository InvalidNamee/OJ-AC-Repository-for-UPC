#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

vector<int> q[500];

int main() {
    int n, k;
    scanf("%d%d", &n, &k);    
    int l = sqrt(n), tot = (n + l - 1) / l;
    for (int i = 0; i < n; ++i) {
        q[i / l].push_back(i + 1);
    }
    int x = 0, y = 0; // x 行, y 列
    for (int i = 0; i < n; ++i) {
        int t = k % (n - i);
        while (q[x].size() - y <= t) {
            t -= q[x].size() - y;
            x = (x + 1) % tot;
            y = 0;
        }
        y += t;
        printf("%d ", q[x][y]);
        q[x].erase(q[x].begin() + y);
        if (y >= q[x].size()) x = (x + 1) % tot, y = 0;
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 23026
	Language: C++
	Result: 正确
	Time:624 ms
	Memory:2296 kb
****************************************************************/
