#include <cstdio>
#include <vector>

using namespace std;

vector<int> ans;

int main() {
    int n, w, cur = 0;
    scanf("%d%d", &n, &w);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (cur + t > w) {
            ans.push_back(cur);
            cur = t;
        }
        else cur += t;
    }
    if (cur) ans.push_back(cur);
    printf("%ld\n", ans.size());
    for (auto i : ans) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 14045
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/