#include <iostream>
#include <cstring>

using namespace std;

struct Hipre {
    int a[300], l;

    Hipre() {
        memset(a, 0, sizeof(a));
        l = 1;
    }

    friend istream& operator >>(istream &cin, Hipre &_) {
        string s;
        cin >> s;
        _.l = s.length();
        for (int i = 0; i < _.l; ++i) {
            _.a[i] = s[_.l - i - 1] - 48;
        }
        return cin;
    }

    friend ostream& operator <<(ostream &cout, const Hipre &_) {
        for (int i = _.l - 1; i >= 0; --i) {
            cout << _.a[i];
        }
        return cout;
    }

    Hipre operator *(const Hipre &_) {
        Hipre res;
        res.l = _.l + l;
        for (int i = 0; i < l; ++i) {
            for (int j = 0; j < _.l; ++j) {
                res.a[i + j] += a[i] * _.a[j];
            }
        }
        for (int i = 0; i < res.l; ++i) {
            res.a[i + 1] += res.a[i] / 10;
            res.a[i] %= 10;
        }
        while (res.a[res.l - 1] == 0) res.l--;
        return res;
    }

    friend Hipre operator -(const Hipre &a, const Hipre &b) {
        Hipre c = a;
        for (int i = 0; i < c.l; ++i) {
            c.a[i] -= b.a[i];
            if (c.a[i] < 0) c.a[i] += 10, c.a[i + 1] -= 1;
        }
        while (c.a[c.l - 1] == 0 && c.l > 1) c.l--;
        return c;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    Hipre res, one, two;
    two.a[0] = 2;
    res.a[0] = 1;
    one = res;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        res = res * two;
    }
    cout << res - one << endl;
    return 0;
}
/**************************************************************
	Problem: 9855
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2380 kb
****************************************************************/
