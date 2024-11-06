#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b), a && b) {
        int ls = 0, cnt = 0;
        if (a < b) swap(a, b);
        while (a && b) {
            if (a % 10 + b % 10 + ls > 9) {
                ls = 1;
                cnt++;
            }
            else ls = 0;
            a /= 10, b /= 10;
        }
        while (a % 10 + ls > 9) a /= 10, cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}
/**************************************************************
	Problem: 5322
	Language: C++
	Result: 正确
	Time:7 ms
	Memory:2220 kb
****************************************************************/
