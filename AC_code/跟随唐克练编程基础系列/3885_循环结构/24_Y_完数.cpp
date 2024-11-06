#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;

vector<int> v;

int getsum(int n) {
    int l = n / 2, res = 0;
    for (int i = 1; i <= l; ++i) {
        if (n % i == 0) res += i, v.push_back(i);
    }
    return res;
}

int main() {
    int a;
    scanf("%d", &a);
    if (a == getsum(a)) {
        printf("Yes,its factors are ");
        for (auto i : v) printf("%d ", i);
        printf("\n");
    }
    else printf("No\n");
    return 0;
}

/**************************************************************
	Problem: 8672
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2220 kb
****************************************************************/
