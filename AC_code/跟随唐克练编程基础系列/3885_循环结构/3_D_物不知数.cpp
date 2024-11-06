#include <cstdio>
#include <cstring>

int main() {
    int n = 0;
    while (1) {
        n++;
        if (n % 3 == 2 && n % 5 == 3 && n % 7 == 2) {
            printf("%d\n", n);
            return 0;
        }
    }
    return 0;
}
/**************************************************************
	Problem: 23555
	Language: C++
	Result: 正确
	Time:0 ms
	Memory:1112 kb
****************************************************************/
