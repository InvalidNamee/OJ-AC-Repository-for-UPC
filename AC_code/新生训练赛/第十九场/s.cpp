#include <iostream>
#include <vector>

using namespace std;

vector<string> s[3];

int main() {
    int n;
    cin >> n;
    while (n--) {
        string ss;
        cin >> ss;
        if (ss[0] == '8') s[0].push_back(ss);
        else if (ss[0] == '5') s[1].push_back(ss);
        else if (ss[0] == '2') s[2].push_back(ss); 
    }
    for (int i = 0; i < 3; ++i) {
        cout << char('A' + i) << ':';
        for (auto i : s[i]) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
