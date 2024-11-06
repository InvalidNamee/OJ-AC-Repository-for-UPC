#include <cstdio>
#include <iostream>

using namespace std;

double d(int n) {
    if (n <= 5) return 1.0;
    else if (n <= 10) return 0.6;
    else if (n <= 20) return 0.5;
    else return 0.3;
}

int main() {
    int n;
    double a, b, c;
    while (scanf("%d%lf%lf%lf", &n, &a, &b, &c) != EOF) {
        int air = a * d(n) + b + 0.5, tr = c + 0.5;
        if (air < tr) printf("Airplane %d\n", air);
        else printf("Train %d\n", tr);
    }
    return 0;
}
/**************************************************************
	Problem: 1022
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
