#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

bool check() {
    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > v[i - 1]) return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        v.push_back(t);
    }
    if (check() || (reverse(v.begin(), v.end()), check())) printf("Good\n");
    else printf("No\n");
    return 0;
}
/**************************************************************
	Problem: 22571
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:1360 kb
****************************************************************/
