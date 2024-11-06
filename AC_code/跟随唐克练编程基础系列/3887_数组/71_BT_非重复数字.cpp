#include <cstdio>
#include <map>

using namespace std;

map<int, bool> mp1, mp2, mp3;
int a[30], b[30];

int main() {
    int n, m;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]), mp1[a[i]] = true;
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i) {
        scanf("%d", &b[i]);
        if (mp1[b[i]]) mp2[b[i]] = true;
    }
    for (int i = 1; i <= n; ++i) if (!mp2[a[i]] && !mp3[a[i]]) printf("%d ", a[i]), mp3[a[i]] = true;
    for (int i = 1; i <= m; ++i) if (!mp2[b[i]] && !mp3[b[i]]) printf("%d ", b[i]), mp3[b[i]] = true;
    printf("\n");
    return 0;
}
/**************************************************************
	Problem: 9851
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:1308 kb
****************************************************************/
