#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> mp;
int a[10], b[10];

int main() {
    for (int i = 0; i < 10; ++i) scanf("%d", &a[i]), b[i] = a[i];
    sort(b, b + 10);
    for (int i = 0; i < 10; ++i) {
        if (!mp[b[i]]) mp[b[i]] = i + 1;
    }
    for (int i = 0; i < 10; ++i) printf("%3d", mp[a[i]]);
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 22540
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1308 kb
****************************************************************/
