#include <iostream>
#include <cstring>

using namespace std;

struct Hipre {
    int a[300], l;

    Hipre() {
        memset(a, 0, sizeof(a));
        l = 1;
    }

    friend Hipre mv(const Hipre &a, int w) {
        Hipre res;
        res.l = a.l + w;
        memcpy(res.a + w, a.a, a.l * sizeof(int));
        return res;
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

    friend Hipre operator -(const Hipre &a, const Hipre &b) {
        Hipre c = a;
        for (int i = 0; i < c.l; ++i) {
            c.a[i] -= b.a[i];
            if (c.a[i] < 0) c.a[i] += 10, c.a[i + 1] -= 1;
        }
        while (c.a[c.l - 1] == 0 && c.l > 1) c.l--;
        return c;
    }

    friend Hipre operator /(const Hipre &a, const Hipre &b) {
        Hipre c = a, res;
        if (a < b) return res;
        res.l = a.l - b.l + 1;
        for (int i = a.l - b.l; i >= 0; --i) {
            Hipre d = mv(b, i);
            while (!(c < d)) c = c - d, res.a[i]++;
        } 
        if (res.a[res.l - 1] == 0 && res.l > 1) res.l--;
        return res;
    }

    friend Hipre operator %(const Hipre &a, const Hipre &b) {
        Hipre c = a;
        for (int i = a.l - b.l; i >= 0; --i) {
            Hipre d = mv(b, i);
            while (!(c < d)) c = c - d;
        } 
        return c;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    Hipre a, b;
    cin >> a >> b;
    cout << a / b << endl << a % b << endl;
    return 0;
}
/**************************************************************
	Problem: 9856
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
