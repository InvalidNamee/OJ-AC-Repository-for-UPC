#include <iostream>
#include <map>

using namespace std;

map<char, char> mp = {
    {'O', '0'},
    {'l', '1'},
    {'Z', '2'},
    {'S', '5'},
    {'b', '6'},
    {'B', '8'},
    {'q', '9'}
};

int main() {
    string s;
    cin >> s;
    for (auto &i : s) {
        if (mp.find(i) != mp.end()) i = mp[i];
    }
    cout << s << endl;
    return 0;
}