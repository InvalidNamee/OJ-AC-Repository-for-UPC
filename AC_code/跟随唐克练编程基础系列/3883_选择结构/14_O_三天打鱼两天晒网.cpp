#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    printf((n - 1) % 5 < 3 ? "Fishing in day %d\n" : "Drying in day %d\n", n);
    return 0;
}
/**************************************************************
	Problem: 8660
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
