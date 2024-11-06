#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<string> sample;

int main() {
    string s;
    while (getline(cin, s), s != "EOF") {
        sample.push_back(s);
    }
    int cnt = 0, p = 0;
    while (getline(cin, s), s != "EOF") {
        string t;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '<') t.pop_back();
            else t += s[i];
        }
        for (int i = 0; i < min(sample[p].length(), t.length()); ++i) {
            cnt += t[i] == sample[p][i]; 
        }
        p++;
    }
    int m;
    cin >> m;
    cout << fixed << setprecision(0) << (double)cnt / ((double)m / 60) << endl;
    return 0;
}
/**************************************************************
	Problem: 18777
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/
