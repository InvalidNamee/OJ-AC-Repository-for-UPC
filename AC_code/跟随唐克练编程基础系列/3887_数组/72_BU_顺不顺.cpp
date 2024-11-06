#include <cstdio>
#include <algorithm>

using namespace std;

int a[1000];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) { 
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    for (int i = 1; i < n; ++i) {
        if (a[i] - a[i - 1] != 1) {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}
/**************************************************************
	Problem: 9849
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
