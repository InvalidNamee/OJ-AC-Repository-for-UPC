#include <cstdio>
#include <vector>

using namespace std;

int a[1010];
vector<int> b[1010];

int main() {
    int n; 
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int k = 0;
    b[0].push_back(0x3f3f3f3f);
    for (int i = 1; i <= n; ++i) {
        int p = 0;
        for (int j = 1; j <= k; ++j) {
            if (a[i] <= b[j].back() && b[j].back() < b[p].back()) {
                p = j;
            }
        }
        if (p) b[p].push_back(a[i]);
        else b[++k].push_back(a[i]);
    }
    printf("%d\n", k);
    for (int i = 1; i <= k; ++i) {
        printf("%d:", i);
        for (auto j : b[i]) printf("%d ", j);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 23840
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1388 kb
****************************************************************/