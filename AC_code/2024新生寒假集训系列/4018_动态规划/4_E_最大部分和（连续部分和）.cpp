#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n; 
    int s = 0, mns = 0, res = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int t;
        scanf("%d", &t);
        s += t;
        res = max(res, s - mns);
        mns = min(mns, s);
    }
    printf("%d\n", res);
    return 0;
}
/**************************************************************
	Problem: 23306
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/