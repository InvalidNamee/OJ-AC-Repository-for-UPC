#include <cstdio>

int main() {
    for (int i = 999; i >= 100; --i) {
        if (555555 % i == 0) {
            printf("%d\n", i);
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 22448
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1112 kb
****************************************************************/
