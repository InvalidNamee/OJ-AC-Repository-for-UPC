#include <cstdio>

bool one(int state) {
    return (state & 1) | (state >> 1 & 1);
}

bool two(int state) {
    return (state & 1) + (state >> 4 & 1) + (state >> 5 & 1) >= 2;
}

bool three(int state) {
    return !((state & 1) & (state >> 3 & 1));
}

bool four(int state) {
    return !((state >> 1 & 1) ^ (state >> 2 & 1));
}

bool five(int state) {
    return (state >> 2 & 1) ^ (state >> 3 & 1);
}

bool six(int state) {
    return (state >> 3 & 1) | !(state >> 4 & 1);
}

int main() {
    for (int i = 0; i < (1 << 6); ++i) {
        if (one(i) && two(i) && three(i) && four(i) && five(i) && six(i)) {
            for (int j = 0; j < 6; ++j) {
                if (i >> j & 1) printf("%c:是罪犯\n", 'A' + j);
                else printf("%c:不是罪犯\n", 'A' + j);
            }
            return 0;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 20251
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
