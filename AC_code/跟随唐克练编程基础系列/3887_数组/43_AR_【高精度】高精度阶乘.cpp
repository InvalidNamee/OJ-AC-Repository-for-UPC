#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

struct Hipre {
    int a[50000], l;

    Hipre () {
        memset(a, 0, sizeof(a));
        l = 0;
    }

    friend ostream& operator <<(ostream &cout, const Hipre &_) {
        for (int i = _.l; i; --i) cout << _.a[i];
        return cout;
    }

    void operator *=(const int &b) {
        for (int i = 1; i <= l; ++i) {
            a[i] *= b;
        }
        for (int i = 1; i <= l; ++i) {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        l++;
        while (a[l] > 9) {
            a[l + 1] += a[l] / 10;
            a[l] %= 10;
            l++;
        }
        while (a[l]) l++;
        while (a[l] == 0) l--;
    }
} a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    a.l = 1, a.a[1] = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        a *= i;
    }
    cout << n << "!=" << a << endl;
    return 0;
}
/**************************************************************
	Problem: 2209
	Language: C++
	Result: 正确
	Time:868 ms
	Memory:2576 kb
****************************************************************/
