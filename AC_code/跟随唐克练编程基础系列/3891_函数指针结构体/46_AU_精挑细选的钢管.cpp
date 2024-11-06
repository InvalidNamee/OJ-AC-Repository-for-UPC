#include <cstdio>
#include <algorithm>

using namespace std;

struct Node
{
    int a, b, c;
} a[50];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d%d", &a[i].a, &a[i].b, &a[i].c);
    }
    sort(a, a + n, [](Node a, Node b) {
        if (a.a != b.a) return a.a > b.a;
        else if (a.b != b.b) return a.b < b.b;
        else return a.c > b.c;
    });
    printf("%d\n", a[0].c);
    return 0;
}
/**************************************************************
	Problem: 3105
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1240 kb
****************************************************************/
