#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (8 <= n && n <= 10) printf("ertongzu\n");
    else if (11 <= n && n <= 14) printf("shaonianzu\n");
    else printf("qingnianzu\n");
    return 0;
}
/**************************************************************
	Problem: 22399
	Language: C++
	Result: 正确
	Time:16 ms
	Memory:2220 kb
****************************************************************/
