#include <cstdio>
#include <cstring>

int main() {
    char str[1000010];
    scanf("%s", &str);
    int t = 1, l = strlen(str), ans = 1;
    for (int i = 1; i < l; ++i) {
        if (str[i] == str[i - 1]) t ++;
        else t = 1;
        ans = ans > t ? ans : t;
    }
    printf("%d\n", ans);
    return 0;
}
/**************************************************************
	Problem: 22994
	Language: C++
	Result: 正确
	Time:100 ms
	Memory:1980 kb
****************************************************************/