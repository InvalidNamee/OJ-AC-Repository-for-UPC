#include <cstdio>
#include <algorithm>

using namespace std;

int a[10];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a, a + n, [](int a, int b) {
        return a > b;
    });
    int t = 0;
    for (int i = 0; i < n; ++i) t = t * 10 + a[i];
    printf("%d\n", t); 
    return 0;
}
/**************************************************************
	Problem: 22633
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
