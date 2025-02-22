#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

typedef long long ll;

const ll s[20] = {1, 10, 190, 2890, 38890, 488890, 5888890, 68888890, 788888890, 8888888890, 98888888890, 1088888888890, 11888888888890, 128888888888890, 1388888888888890, 14888888888888890, 158888888888888890, 1688888888888888890};

int main() {
    // freopen("data", "r", stdin);
    // freopen("o", "w", stdout);
    int n; 
    scanf("%d", &n);
    while (n --) {
        ll m;
        scanf("%lld", &m);
        for (int i = 0; i <= 17; ++i) {
            if (m >= s[i] && m < s[i + 1]) {
                ll t = (m - s[i]) / (ll)(i + 1) + (ll)pow(10LL, i);
                // cout << t << endl;
                printf("%lld\n", (t / (ll)pow(10LL, i - (m - s[i]) % (i + 1))) % 10);
                break;
            }
        }
    }  
     return 0;
}
/**************************************************************
	Problem: 23009
	Language: C++
	Result: 正确
	Time:5 ms
	Memory:2208 kb
****************************************************************/