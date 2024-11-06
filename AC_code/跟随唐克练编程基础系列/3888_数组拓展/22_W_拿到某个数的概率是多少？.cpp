#include <cstdio>
#include <map>

using namespace std;

map<int, int> mp;

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        mp[t]++;
    }
    scanf("%d", &x);
    printf("%.2f\n", (double)mp[x] / n);
    return 0;
}
/**************************************************************
	Problem: 22559
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1304 kb
****************************************************************/
