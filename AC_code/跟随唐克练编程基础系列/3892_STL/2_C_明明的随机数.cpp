#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> a;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int v;
        scanf("%d", &v);
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    printf("%ld\n", a.size());
    for (int i = 0; i < a.size(); ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;   
}
/**************************************************************
	Problem: 3561
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/
