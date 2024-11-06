#include <cstdio>
#include <algorithm>

using namespace std;

int a[10];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    sort(a, a + n);
    if (a[0] == 0) {
        for (int i = 0; i < n; ++i) {
            if (a[i]) {
                swap(a[i], a[0]);
                break;
            }
        }
    }
    int t = 0;
    for (int i = 0; i < n; ++i) t = t * 10 + a[i];
    printf("%d\n", t); 
    return 0;
}
/**************************************************************
	Problem: 22632
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
