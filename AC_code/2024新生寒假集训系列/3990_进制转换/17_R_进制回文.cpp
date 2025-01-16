#include <cstdio>
#include <vector>

using namespace std;

bool check(int n, int t) {
    int a[40], l = 0;
    while (n) {
        a[++l] = n % t;
        n /= t;
    }
    for (int i = 1; i <= (l >> 1); ++i) {
        if (a[i] != a[l - i + 1]) return false;
    }
    return true;
}

int main() {
    vector<int> ans;
    int x;
    scanf("%d", &x);
    for (int i = 2; i <= 16; ++i) {
        if (check(x, i)) ans.push_back(i);
    }
    if (ans.empty()) printf("No\n");
    else {
        printf("Yes\n");
        for (auto i : ans) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 23852
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1360 kb
****************************************************************/