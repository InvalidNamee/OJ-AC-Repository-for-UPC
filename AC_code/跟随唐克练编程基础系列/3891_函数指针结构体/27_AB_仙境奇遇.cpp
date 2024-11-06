#include <cstdio>
#include <vector>

using namespace std;

vector<int> a[2];

int main() {
    int n;
    scanf("%d", &n);
    for (int j = 0; j < 2; ++j)
        for (int i = 0; i < n; ++i) {
            int t;
            scanf("%d", &t);
            a[j].push_back(t);
        }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (a[0][i] >= 10 && 2 * a[1][i] >= a[0][i]) cnt += 3;
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 5068
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/
