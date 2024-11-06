#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int l1, a1, l2, a2;
    scanf("%d%d%d%d", &l1, &a1, &l2, &a2);
    int t1 = (l1 + a2 - 1) / a2, t2 = (l2 + a1 - 1) / a1;
    if (t1 <= t2) printf("%d\n", t1);
    else printf("Sorry,Miss Moonlight\n");
    return 0;
}
/**************************************************************
	Problem: 1012
	Language: C++
	Result: 正确
	Time:17 ms
	Memory:2220 kb
****************************************************************/
