#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 32) printf("Golden Medal\n");
    else if (n <= 96) printf("Silver Medal\n");
    else if (n <= 192) printf("Bronze Medal\n");
    else printf("Honorable Mention\n");
    return 0;
}
/**************************************************************
	Problem: 2973
	Language: C++
	Result: 正确
	Time:10 ms
	Memory:2220 kb
****************************************************************/
