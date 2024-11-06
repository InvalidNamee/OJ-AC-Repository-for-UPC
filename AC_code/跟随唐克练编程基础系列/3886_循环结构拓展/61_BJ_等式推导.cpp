#include <cstdio>
#include <cmath>

int main() {
    int cnt = 0;
    for (int s = 1; s < 10; ++s) {
        for (int i = 0; i < 10; ++i) {
            for (int x = 0; x < 10; ++x) {
                for (int n = 1; n < 10; ++n) {
                    for (int e = 0; e < 10; ++e) {
                        if ((s * 100 + i * 10 + x) * 3 == (n * 1000 + i * 100 + n * 10 + e) * 2) cnt++;
                    }
                }
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 10037
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
