#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;
    int l = n.length();
    if (l == 5) printf("wan\n");
    else if (l == 6) printf("shi wan\n");
    else if (l == 7) printf("bai wan\n");
    else if (l == 8) printf("qian wan\n");
    else if (l == 9) printf("yi\n");
    else printf("shi yi\n");
    return 0;
}
/**************************************************************
	Problem: 22404
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
