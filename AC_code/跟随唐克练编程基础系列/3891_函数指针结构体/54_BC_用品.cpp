#include <iostream>

using namespace std;

struct Node {
    string name;
    double s;
} a[10];

double val[] = {2.0, 0.5, 0.8, 2.5};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    double ave = 0.0;
    int avt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].name;
        a[i].s = 0;
        int t;
        for (int j = 0; j < 4; ++j) {
            cin >> t;
            a[i].s += val[j] * t;
        }   
        avt += (int)a[i].s;
        ave += a[i].s;
        cout << (int)a[i].s << endl;
    }
    ave /= n;
    avt /= n;
    cout << avt << endl;
    for (int i = 0; i < n; ++i) {
        if (a[i].s < ave) cout << a[i].name << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 10380
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2384 kb
****************************************************************/
