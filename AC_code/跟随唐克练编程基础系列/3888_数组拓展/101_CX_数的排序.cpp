#include <cstdio>
#include <algorithm>

using namespace std;

int a[10];

int calc(int n) {
    int s = 0;
    while (n) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        a[i] = calc(a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22638
	Language: C++
	Result: 正确
	Time:14 ms
	Memory:1236 kb
****************************************************************/
