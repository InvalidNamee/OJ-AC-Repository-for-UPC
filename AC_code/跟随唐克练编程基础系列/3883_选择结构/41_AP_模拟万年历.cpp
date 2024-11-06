#include <cstdio>
 
bool judge(int n) {
    if (!(n % 100)) return n % 400 == 0;
    else return n % 4 == 0;
}
 
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) printf("31\n");
    else if (m == 2) printf(judge(n) ? "29\n" : "28\n");
    else printf("30\n");
    return 0;
}
/**************************************************************
	Problem: 1067
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1236 kb
****************************************************************/
