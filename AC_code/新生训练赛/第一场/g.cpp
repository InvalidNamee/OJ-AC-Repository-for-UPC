#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 0, c = 0, pre;
    scanf("%d", &n);
    scanf("%d", &pre);
    for (int i = 1; i < n; ++i) {
        int t;
        scanf("%d", &t);
        if (abs(pre - t) >= 10) {
            a++;
            b++;
        }
        else {
            if (b >= 2) c++;
            b = 0;
        }
        pre = t; 
    }
    if (b >= 2) c++;
    printf("%d %d\n", a, c);
    return 0;
}