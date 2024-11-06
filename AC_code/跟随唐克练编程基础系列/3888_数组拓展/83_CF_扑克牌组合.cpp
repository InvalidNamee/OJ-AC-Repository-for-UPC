#include <cstdio>
#include <set>

using namespace std;

set<int> s;
int a[52];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            s.insert(a[i] + a[j]);
        }
    }
    printf("%ld\n", s.size());
    for (auto i : s) printf("%d ", i);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22620
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1304 kb
****************************************************************/
