#include <iostream>

using namespace std;

int main() {
    int s;
    cin >> s;
    if (s == 25) cout << "Christmas" << endl;
    else if (s == 24) cout << "Christmas Eve" << endl;
    else if (s == 23) cout << "Christmas Eve Eve" << endl;
    else cout << "Christmas Eve Eve Eve" << endl;
    return 0;
}