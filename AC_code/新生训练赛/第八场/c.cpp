#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    long long n, x, y;
    cin >> n >> x >> y;
    cout << (x + 2 * y - 8 * n) / 2 << endl;
    return 0;
}

/*
-8a + 8b = 8n - 8y
-6a + 8b = x - 6y
2a = x + 2y - 8n
*/