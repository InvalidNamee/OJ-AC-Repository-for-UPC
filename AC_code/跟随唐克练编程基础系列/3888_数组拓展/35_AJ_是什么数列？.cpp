#include <cstdio>

int a[100], n;

bool dengcha() {
    int d = a[1] - a[0];
    for (int i = 2; i < n; ++i) {
        if (a[i] - a[i - 1] != d) return false;
    }
    return true;
}

bool dengbi() {
    double q = (double)a[1] / a[0];
    for (int i = 2; i < n; ++i) {
        if ((double)a[i] / a[i - 1] != q) return false;
    }
    return true;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    if (dengcha()) printf("dengcha\n");
    else if (dengbi()) printf("dengbi\n");
    else printf("no\n");
    return 0;
}
/**************************************************************
	Problem: 22572
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:1236 kb
****************************************************************/
