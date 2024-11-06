#include <cstdio>
#include <map>

using namespace std;

map<int, bool> mp;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        for (int j = 1; j < b; ++j) {
            mp[j * a] = true;
        }
    }
    printf("%ld\n", mp.size() + 1);
    return 0;
}
/**************************************************************
	Problem: 13855
	Language: C++
	Result: 正确
	Time:18 ms
	Memory:4076 kb
****************************************************************/
