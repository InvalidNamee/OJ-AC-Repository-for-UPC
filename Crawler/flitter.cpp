#include <iostream>

using namespace std;

int main() {
    string s;
    int blank = 0;
    while (getline(cin, s)) {
        if (s == "") blank++;
        else if (s.find("2024UPC003") != -1) continue;
        else if (blank > 1) {
            blank = 0;
            cout << endl << s << endl;
        }
        else blank = 0, cout << s << endl;
    }
    return 0;
}