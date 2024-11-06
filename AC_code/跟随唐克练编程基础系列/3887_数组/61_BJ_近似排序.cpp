#include <cstdio>
#include <algorithm>

using namespace std;

int rev(int n) {
    int res = 0;
    while (n) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool cmp(const int &a, const int &b) {
    return rev(a) < rev(b);
}

int c[100];

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = 0; i < b - a + 1; ++i) {
        c[i] = a + i;
    }
    sort(c, c + b - a + 1, cmp);
    for (int i = 0; i < b - a + 1; ++i) {
        printf("%d\n", c[i]);
    }
    return 0;
}
/**************************************************************
	Problem: 10155
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
