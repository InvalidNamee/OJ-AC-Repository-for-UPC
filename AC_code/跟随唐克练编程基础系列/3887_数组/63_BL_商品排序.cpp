#include <cstdio>
#include <algorithm>

using namespace std;

int a[100000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 0; i < n; ++i) {
        printf("%d\n", a[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 10159
	Language: C++
	Result: 正确
	Time:38 ms
	Memory:1628 kb
****************************************************************/
