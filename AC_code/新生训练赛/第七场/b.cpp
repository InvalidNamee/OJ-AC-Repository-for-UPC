#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    long long s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        string tmp = to_string(i), tmpp = tmp;
        reverse(tmpp.begin(), tmpp.end());
        s += stoll(tmp + tmpp); 
    }
    printf("%lld\n", s);
    return 0;
}