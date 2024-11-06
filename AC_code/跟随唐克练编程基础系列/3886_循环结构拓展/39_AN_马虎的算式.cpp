#include <cstdio>

int main() {
    int cnt = 0;
    for (int a = 1; a < 10; ++a) {
        for (int b = 1; b < 10; ++b) {
            if (a == b) continue;
            for (int c = 1; c < 10; ++c) {
                if (a == c || b == c) continue;
                for (int d = 1; d < 10; ++d) {
                    if (a == d || b == d || c == d) continue;
                    for (int e = 1; e < 10; ++e) {
                        if (a == e || b == e || c == e || d == e) continue;
                        cnt += (a * 10 + b) * (c * 100 + d * 10 + e) == (a * 100 + d * 10 + b) * (c * 10 + e);
                    }
                }
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
/**************************************************************
	Problem: 22525
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
