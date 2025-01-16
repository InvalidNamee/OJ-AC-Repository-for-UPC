#include <cstdio>
#include <vector>

using namespace std;

int cnt, n;
vector<int> ans;

void dfs(int m) {
    if (m == 1) {
        cnt++;
        printf("%d", n);
        for (auto i : ans) printf("-%d", i);
        printf("\n");
        return;
    }
    int l = m >> 1;
    for (int i = 1; i <= l; ++i) {
        ans.push_back(i);
        dfs(i);
        ans.pop_back();
    }
}

int main() {
    scanf("%d", &n);
    dfs(n);
    printf("%d\n", cnt);
    return 0;
}