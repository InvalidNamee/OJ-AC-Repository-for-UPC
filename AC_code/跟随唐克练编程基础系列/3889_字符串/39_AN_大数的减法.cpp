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

    friend bool operator <(const Hipre &a, const Hipre &b) {
        if (a.l != b.l) return a.l < b.l;
        else {
            for (int i = a.l - 1; i >= 0; --i) {
                if (a.a[i] != b.a[i]) return a.a[i] < b.a[i];
            }
            return false;
        }
    }

    Hipre operator -(const Hipre &_) {
        Hipre res;
        res.l = l;
        memcpy(res.a, a, sizeof(a));
        for (int i = 0; i < l; ++i) {
            res.a[i] -= _.a[i];
            if (res.a[i] < 0) res.a[i] += 10, res.a[i + 1] -= 1;
        }
        while (res.a[res.l - 1] == 0 && res.l > 1) res.l--;
        return res;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    Hipre a, b;
    cin >> a >> b;
    if (a < b) cout << '-' << b - a << endl;
    else cout << a - b << endl;
    return 0;
}
/**************************************************************
	Problem: 9857
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
