#include <cstdio>
#include <iostream>

using namespace std;

int f[] = {0, 4, 6, 9, 10, 17};

int main() {
    int w, no;
    scanf("%d%d", &w, &no);
    printf("%d\n", 20 + max(0, (w - 1) / 500 * f[no]));
    return 0;
}
/**************************************************************
	Problem: 10095
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
