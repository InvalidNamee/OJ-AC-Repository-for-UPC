#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string cmd, cur = "http://www.acm.org/";
        stack<string> fwd, bwd;
        
        while (cin >> cmd && cmd != "QUIT") {
            if (cmd == "VISIT") {
                bwd.push(cur);
                cin >> cur;
                while (!fwd.empty()) fwd.pop();
                cout << cur << endl;
            }
            else if (cmd == "BACK") {
                if (bwd.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    fwd.push(cur);
                    cur = bwd.top();
                    bwd.pop();
                    cout << cur << endl;
                }
            }
            else if (cmd == "FORWARD") {
                if (fwd.empty()) {
                    cout << "Ignored" << endl;
                } else {
                    bwd.push(cur);
                    cur = fwd.top();
                    fwd.pop();
                    cout << cur << endl;
                }
            }
        }
        
        if (n) cout << endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1300
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2388 kb
****************************************************************/
