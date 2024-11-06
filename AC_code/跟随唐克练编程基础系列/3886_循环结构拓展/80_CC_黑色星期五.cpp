#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

bool judge(int n) {
    if (!(n % 100)) return n % 400 == 0;
    else return n % 4 == 0;
}

int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    if (judge(n)) d[1] = 29;
    for (int i = 0; i < 12; ++i) {
        if ((m + 12) % 7 == 5) {
            printf("%d/%d/%d\n", n, i + 1, 13);
        }
        m += d[i];
    }
    return 0;
}

/**************************************************************
	Problem: 10041
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
