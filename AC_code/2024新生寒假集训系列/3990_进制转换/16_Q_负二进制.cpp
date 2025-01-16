#include <cstdio>
#include <stack>

using namespace std;

int a[100], l;

int main() {
    int n, neg = 0;
    scanf("%d", &n);
    if (n < 0) n = -n, neg = 1;
    while (n) {
        a[++l] = n % 2;
        n /= 2;
    }
    for (int i = 1; i <= l; ++i) {
        if (a[i] == 2) {
            if (i == l) l++;
            a[i] = 0, a[i + 1]++;
        }
        if (i % 2 == neg) {
            if (a[i]) {
                a[i + 1]++;
                if (i == l) l++;
            }
        }
    }
    for (int i = l; i; --i) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}

/*
23 = 64 - 32 - 8 - 2 + 1
23 = 16 + 4 + 2 + 1
10111

13 = -8 -8 + 4 + -2 + 1

*/
/**************************************************************
	Problem: 23851
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/