#include <iostream>

using namespace std;

int cnt = 0;

void work(int u, string b) {
    if (u == 4) {
        cnt += 5;
        cout << "OOO__***O*" << b << endl;
        cout << "OOO*O**__*" << b << endl;
        cout << "O__*O**OO*" << b << endl;
        cout << "O*O*O*__O*" << b << endl;
        cout << "__O*O*O*O*" << b << endl;
        return;
    }
    b += "O*";
    for (int i = 1; i < u; ++i) cout << 'O';
    cout << "__";
    for (int i = 1; i < u; ++i) cout << '*';
    cout << b << endl;
    for (int i = 1; i < u; ++i) cout << 'O';
    for (int i = 1; i < u; ++i) cout << '*';
    cout << "__";
    cout << b << endl;
    cnt += 2;
    work(u - 1, b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    work(n, "");
    cout << "step=" << cnt << endl;
    return 0;
}
/**************************************************************
	Problem: 1388
	Language: C++
	Result: 正确
	Time:57 ms
	Memory:4376 kb
****************************************************************/