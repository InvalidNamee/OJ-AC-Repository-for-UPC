#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n < 200) printf("%d\n", n);
    else if (n < 300) printf("%d\n", n + 50);
    else if (n < 500) printf("%d\n", n + 100);
    else printf("%d\n", n + 200);
    return 0;
}
/**************************************************************
	Problem: 22402
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
