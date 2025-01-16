#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

struct water {
    string s, u;
    int t;
    bool operator <(const water &a) {
        return u == a.u ? t < a.t : u > a.u;
    }
} king[1010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        king[i].t = i;
        cin >> king[i].s >> king[i].u;
        stringstream ss;
        ss << setw(250) << setfill('0') << king[i].u;
        ss >> king[i].u;
    }
    sort(king, king + n);
    for (int i = 0; i < n; ++i) {
        cout << king[i].s << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 3570
	Language: C++
	Result: 正确
	Time:12 ms
	Memory:2784 kb
****************************************************************/