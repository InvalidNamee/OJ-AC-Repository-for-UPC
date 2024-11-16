#include <iostream>

using namespace std;

int main() {
    string s;
    string res[4];
    cin >> s;
    for (auto i : s) {
        if (islower(i)) res[0] += i;
        else if (isupper(i)) res[1] += i;
        else if (isdigit(i)) res[2] += i;
        else res[3] += i;
    }
    int lev = 0;
    for (int i = 0; i < 4; ++i) lev += res[i].size() > 0;
    cout << "password level:" << lev << endl;
    for (int i = 0; i < 4; ++i) {
        if (res[i].empty()) cout << "(Null)" << endl;
        else cout << res[i] << endl;
    }
    return 0;
}