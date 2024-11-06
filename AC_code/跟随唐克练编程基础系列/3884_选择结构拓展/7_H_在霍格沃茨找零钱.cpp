#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int g, s, k;
    bool op;

    Node() {
        op = true;
    }

    friend istream& operator >>(istream &cin, Node &_) {
        scanf("%d.%d.%d", &_.g, &_.s, &_.k);
        return cin;
    }

    friend ostream& operator <<(ostream &cout, const Node &_) {
        if (!_.op) printf("-");
        printf("%d.%d.%d", _.g, _.s, _.k);
        return cout;
    }
} P, A;

Node operator -(Node a, Node b) {
    if (a.g < b.g || a.g == b.g && a.s < b.s || a.g == b.g && a.s == b.s && a.k < b.k) swap(a, b), a.op = false;
    if (a.k < b.k) a.k += 29, a.s -= 1;
    a.k -= b.k;
    if (a.s < b.s) a.s += 17, a.g -= 1;
    a.s -= b.s;
    a.g -= b.g;
    return a;
}

int main() {
    cin >> P >> A;
    cout << A - P << endl;
    return 0;
}
/**************************************************************
	Problem: 16621
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
