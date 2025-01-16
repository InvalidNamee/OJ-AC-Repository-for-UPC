#include <cstdio>
#include <algorithm>

using namespace std;

int pos[20010][5], a[20010];

int main() {
    int n;
    scanf("%d", &n);
    for (int j = 0; j < 5; ++j)
        for (int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
            pos[a[i]][j] = i; 
        }
    sort(a, a + n, [](int a, int b) {
        int cnt = 0;
        for (int i = 0; i < 5; ++i) {
            if (pos[a][i] < pos[b][i]) cnt++;
        }
        return cnt > 2;
    });
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 14614
	Language: C++
	Result: 正确
	Time:19 ms
	Memory:1712 kb
****************************************************************/