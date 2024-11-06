#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    switch(n) {
        case 3: printf("Xiaoban\n"); break;
        case 4: printf("Zhongban\n"); break;
        case 5: printf("Daban\n"); break;
    }
    return 0;
}
/**************************************************************
	Problem: 3099
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
