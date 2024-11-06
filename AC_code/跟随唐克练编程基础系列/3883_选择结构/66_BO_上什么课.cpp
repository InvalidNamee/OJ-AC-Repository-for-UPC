#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) printf("swim\n");
    else if (n == 3) printf("program\n");
    else if (n == 5) printf("read\n");
    else if (n == 6) printf("math\n");
    else printf("rest\n");
    return 0;
}
/**************************************************************
	Problem: 22400
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
