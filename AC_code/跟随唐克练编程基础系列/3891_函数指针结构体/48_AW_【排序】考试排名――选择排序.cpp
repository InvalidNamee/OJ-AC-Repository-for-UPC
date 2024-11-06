#include <cstdio>
#include <algorithm>

using namespace std;

pair<int, int> a[100];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            int t;
            scanf("%d", &t);
            a[i].first += t;
        }
        a[i].first = -a[i].first;
        a[i].second = i + 1;
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i].second);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 3566
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
