#include <iostream>

using namespace std;

const string USERNAME = "Username";

int main() {
    string s;
    int blank = 0;
    while (getline(cin, s)) {
        if (s == "") blank++;
        else if (s.find(USERNAME) != -1) continue;
        else if (blank > 1) {
            blank = 0;
            cout << endl << s << endl;
        }
        else blank = 0, cout << s << endl;
    }
    return 0;
}
