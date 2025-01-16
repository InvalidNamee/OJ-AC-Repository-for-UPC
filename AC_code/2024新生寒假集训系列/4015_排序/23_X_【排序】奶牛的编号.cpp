#include <cstdio>
#include <iostream>

using namespace std;

int a[1010], b[4];

int main() {
    int n, t = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }
    for (int i = 1; i <= b[1]; ++i) {
        if (a[i] == 2) {
            for (int j = b[1] + 1; j <= n; ++j) {
                if (a[j] == 1) {
                    swap(a[i], a[j]);
                    t++;
                    break;
                }
            }
        }
        else if (a[i] == 3) {
            bool f = false;
            for (int j = n; j > b[1]; --j) {
                if (a[j] == 1) {
                    swap(a[i], a[j]);
                    t++;
                    break;
                }
            }
        }
    }
    // for (int i = 1; i <= n; ++i) {
    //     printf("%d ", a[i]);
    // }
    // printf("\n");
    for (int i = b[1] + 1; i <= b[1] + b[2]; ++i) {
        if (a[i] == 3) t++;
    }
    printf("%d\n", t);
    return 0;
}

/*
22 133 3231
11 233 3232
*/
/**************************************************************
	Problem: 3578
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2224 kb
****************************************************************/