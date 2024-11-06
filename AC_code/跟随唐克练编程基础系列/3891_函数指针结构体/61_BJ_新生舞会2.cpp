#include <iostream>
#include <map>

using namespace std;

map<string, bool> nts, its;

bool get(const string &s) {
    if (isdigit(s[0])) return its[s];
    else return nts[s];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n;
    while (n--) {
        string nm, i;
        char sex;
        cin >> nm >> i >> sex;
        nts[nm] = sex == 'M';
        its[i] = sex == 'M';
    }
    cin >> m;
    while (m--) {
        string a, b;
        cin >> a >> b;
        cout << (get(a) ^ get(b) ? 'Y' : 'N') << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 22054
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2524 kb
****************************************************************/
