#include <cstdio>
#include <iostream>
#include <set>

using namespace std;

int mark[101], len;
set<pair<int, int>> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        if (mark[t]) s.insert({mark[t], t});
        else mark[t] = i;
    }
    if (s.empty()) printf("Not Found\n");
    else {
        for (auto i : s) printf("%d ", i.second);
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 9850
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
