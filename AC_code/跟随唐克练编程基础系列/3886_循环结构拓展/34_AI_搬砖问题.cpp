#include <cstdio>

int main() {
    for (int i = 1; i * 4 < 36; ++i) {
        for (int j = 1; i * 4 + j * 3 < 36; ++j) {
            if (i + j + (36 - i * 4 - j * 3) * 2 == 36)
                printf("%d %d %d\n", i, j, (36 - i * 4 - j * 3) * 2);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22520
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
