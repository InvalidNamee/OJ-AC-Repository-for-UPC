#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

typedef pair<int, int> pii;

pii a[200];

bool cmp(const pii &a, const pii &b) {
    return a.first == b.first ? a.second < b.second : a.first > b.first; 
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &a[i].first, &a[i].second);
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i) {
        int t = 0;
        for (int j = 0; j < i; ++j) {
            if (a[j].second < a[i].second) t++;
        }
        printf("%d\n", t);
    }
    return 0;
}
/**************************************************************
	Problem: 14255
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:2228 kb
****************************************************************/