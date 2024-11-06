#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

string f(int n) {
    if (n >= 90) return "Excellent";
    else if (n >= 80) return "Good";
    else if (n >= 60) return "Pass";
    else return "Fail";
}

int main() {
    int n;
    scanf("%d", &n);
    cout << f(n) << endl;
    return 0;
}
/**************************************************************
	Problem: 22392
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
