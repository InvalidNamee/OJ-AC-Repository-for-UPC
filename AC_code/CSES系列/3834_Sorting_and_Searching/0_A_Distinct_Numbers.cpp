#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        vec.push_back(t);
    }
    sort(vec.begin(), vec.end());
    printf("%d\n", unique(vec.begin(), vec.end()) - vec.begin());
    return 0;
}
/**************************************************************
	Problem: 23011
	Language: C++
	Result: 正确
	Time:1022 ms
	Memory:3652 kb
****************************************************************/
