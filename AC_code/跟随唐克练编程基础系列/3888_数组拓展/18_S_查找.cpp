#include <cstdio>
#include <algorithm>

using namespace std;

int a[1000];

bool check(int x, int t) {
    while (t) {
        if (t % 10 == x) return true;
        t /= 10;
    }
    return false;
}

int main() {
    int x, n, s = 0, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; ++i) {
        if (check(x, a[i])) {
            cnt++;
            s += a[i];
        }
    }
    printf("%d %d\n", cnt, s);
    return 0;
}
/**************************************************************
	Problem: 22555
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
