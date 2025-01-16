#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Hipre {
    vector<int> a;

    void mv(int t) {
        vector<int> b(t, 0);
        b.insert(b.end(), a.begin(), a.end());
        a = b;
    }
    Hipre() {
        a = vector<int>(1, 0);
    }

    Hipre(int n) {
        if (!n) {
            a = vector<int>(1, 0);
        }
        else
            while (n) {
                a.push_back(n % 10);
                n /= 10;
            }
    }

    int length() const {
        return a.size();
    }

    int to_int() {
        int res = 0, mul = 1;
        for (int i = 0; i < a.size(); ++i) {
            res += a[i] * mul;
            mul *= 10;
        }
        return res;
    }

    int &operator [](const int &p) {
        return a[p];
    }

    friend istream &operator >>(istream &cin, Hipre &a) {
        static string s;
        cin >> s;
        a.a = vector<int>(s.length());
        for (int i = 0; i < s.length(); ++i) {
            a.a[i] = s[s.length() - i - 1] - 48;
        }
        while (a.length() > 1 && a.a.back() == 0) a.a.pop_back();
        return cin;
    }

    friend ostream &operator <<(ostream &cout, const Hipre &a) {
        for (int i = a.length() - 1; i >= 0; --i)
            cout << a.a[i];
        return cout;
    }

    bool operator <(const Hipre &c) const {
        if (length() != c.length()) return length() < c.length();
        else {
            for (int i = length() - 1; i >= 0; --i) {
                if (a[i] != c.a[i]) return a[i] < c.a[i];
            }
            return false;
        }
    }

    bool operator ==(const Hipre &c) const {
        if (length() != c.length()) return false;
        else {
            for (int i = length() - 1; i >= 0; --i) {
                if (a[i] != c.a[i]) return false;
            }
            return true;
        }
    }

    Hipre operator +(const Hipre &c) {
        auto &b = c.a;
        Hipre res;
        res.a = vector<int>(max(a.size(), b.size()) + 1, 0);
        for (int i = 0; i < res.length(); ++i) {
            if (i < a.size() && i < b.size()) res[i] += a[i] + b[i];
            else if (i < a.size()) res[i] += a[i];
            else if (i < b.size()) res[i] += b[i];
            if (res[i] > 9) res.a[i + 1] += 1, res[i] -= 10;
        }
        while (res.length() > 1 && res.a.back() == 0) res.a.pop_back();
        return res;
    }

    Hipre operator -(const Hipre &c) {
        Hipre res = *this;
        for (int i = 0; i < res.length(); ++i) {
            if (i < c.length()) res[i] -= c.a[i];
            if (res[i] < 0) res[i] += 10, res.a[i + 1] -= 1;
        }
        while (res.length() > 1 && res.a.back() == 0) res.a.pop_back();
        return res;
    }

    Hipre operator *(const Hipre &c) {
        auto &b = c.a;
        Hipre res;
        res.a = vector<int>(a.size() + b.size(), 0);
        for (int i = 0; i < a.size(); ++i) {
            for (int j = 0; j < b.size(); ++j) {
                res.a[i + j] += a[i] * b[j];
            }
        }
        for (int i = 0; i < res.length() - 1; ++i) {
            res.a[i + 1] += res[i] / 10;
            res[i] %= 10;
        }
        while (res.length() > 1 && res.a.back() == 0) res.a.pop_back();
        return res;
    }

    Hipre operator *=(const int &c) {
        if (c)
            a.resize(a.size() + (int)floor(log10(c)) + 1);
        for (int i = 0; i < a.size(); ++i) {
            a[i] *= c;
        }
        for (int i = 0; i < a.size() - 1; ++i) {
            if (a[i] > 9) a[i + 1] += a[i] / 10, a[i] %= 10;
        }
        while (a.size() > 1 && a.back() == 0) a.pop_back();
        return *this;
    }

    Hipre operator *(const int &c) {
        Hipre t = *this;
        return t *= c;
    }

    Hipre operator /(const int &c) {
        Hipre res;
        res.a = vector<int>(a.size());
        int t = 0;
        for (int i = a.size() - 1; i >= 0; --i) {
            t = t * 10 + a[i];
            if (t >= c) res[i] = t / c;
            t %= c;
        }
        while (res.length() > 1 && res.a.back() == 0) res.a.pop_back();
        return res;
    }

    Hipre operator /(Hipre c) {
        Hipre res, b = *this;
        int l = b.length() - c.length();
        res.a = vector<int>(l + 1, 0);
        c.mv(b.length() - c.length());
        for (int i = l; i >= 0; --i) {
            while (!(b < c)) {
                b = b - c;
                res[i]++;
            }
            c.a.erase(c.a.begin());
        }
        while (res.length() > 1 && res.a.back() == 0) res.a.pop_back();
        return res;
    }

    Hipre operator %(Hipre c) {
        Hipre b = *this;
        int l = b.length() - c.length();
        c.mv(b.length() - c.length());
        for (int i = l; i >= 0; --i) {
            while (!(b < c)) {
                b = b - c;
            }
            c.a.erase(c.a.begin());
        }
        while (b.length() > 1 && b.a.back() == 0) b.a.pop_back();
        return b;
    }
};


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    string s;
    Hipre ans(0), base(125);
    cin >> s;
    for (auto i : s) {
        ans = ans * 1000 + base * (i - 48);
        base *= 125;
    }
    vector<int> t = ans.a;
    int i = 3 * s.length() - t.size();
    while (i--) cout << 0;
    i = 0;
    while (t[i] == 0 && i < t.size()) i++;
    for (int j = t.size() - 1; j >= i; --j) cout << t[j];
    cout << endl;
    return 0;
}

/**************************************************************
	Problem: 23581
	Language: C++
	Result: 正确
	Time:9 ms
	Memory:2532 kb
****************************************************************/