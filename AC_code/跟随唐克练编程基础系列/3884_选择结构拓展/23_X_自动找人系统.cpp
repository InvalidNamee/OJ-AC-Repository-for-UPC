#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int a, b, c;

    friend istream& operator >> (istream &cin, Node &a) {
        cin >> a.a >> a.b >> a.c;
        return cin;
    }

    bool operator <=(const Node &_) {
        if (a > _.a) return false;
        else if (a == _.a && b > _.b) return false;
        else if (a == _.a && b == _.b && c > _.c) return false;
        else return true; 
    }
} l, r, a;

int main() {
    cin >> l >> r >> a;
    if (r <= l) swap(l, r);
    if (l <= a && a <= r) printf("Yes\n");
    else printf("No\n");
    return 0;
}

/**************************************************************
	Problem: 21235
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
