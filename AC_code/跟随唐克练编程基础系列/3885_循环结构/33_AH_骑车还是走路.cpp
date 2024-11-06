#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int d;
        scanf("%d", &d);
        double t1 = (double)d / 3.0 + 50, t2 = (double)d / 1.2;
        if (t1 == t2) printf("All\n");
        else if (t1 > t2) printf("Walk\n"); 
        else printf("Bike\n");
    }
    return 0;
}
/**************************************************************
	Problem: 8667
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:2220 kb
****************************************************************/
