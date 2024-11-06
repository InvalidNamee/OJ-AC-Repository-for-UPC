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
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    Hipre a, b;
    cin >> a >> b;
    cout << a * b << endl;
    return 0;
}
/**************************************************************
	Problem: 9864
	Language: C++
	Result: 正确
	Time:15 ms
	Memory:2384 kb
****************************************************************/
