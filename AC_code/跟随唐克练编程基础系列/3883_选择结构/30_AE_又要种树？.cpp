#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s[] = {"Platanus orientalis", "Ginkgo", "Pine"};
    pair<int, int> a[] = {{0, 0}, {0, 1}, {0, 2}};
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &a[i].first);
    }
    sort(a, a + 3);
    cout << s[a[2].second] << endl;
    return 0;
}
/**************************************************************
	Problem: 1037
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
