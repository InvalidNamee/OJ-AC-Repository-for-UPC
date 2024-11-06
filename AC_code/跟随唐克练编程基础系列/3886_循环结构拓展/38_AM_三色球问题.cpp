#include <cstdio>

int main() {
    int n = 0;
    for (int i = 0; i <= 3; ++i) {
        for (int j = 0; j <= 3; ++j) {
            for (int k = 0; k <= 6; ++k) {
                if (i + j + k == 8) n++;
            }
        }
    }
    printf("%d\n", n);
    return 0;
}
/**************************************************************
	Problem: 22524
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
