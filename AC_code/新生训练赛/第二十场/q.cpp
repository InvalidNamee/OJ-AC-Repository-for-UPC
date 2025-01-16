#include <sstream>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    stringstream ss;
    int a, b, c;
    cin >> a >> b;
    ss << a << b;
    ss >> c;
    if ((int)sqrt(c) * (int)sqrt(c) == c) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}