/*在下面完成Fun函数编写，提交时只需要提交Fun函数即可*/
int Fun(char s[]) {
    int res = 0, pre = 0;
    for (int i = 0; i < strlen(s); ++i) {
        if (!i) res++;
        else if (s[i] != pre + 1) res++;
        pre = s[i];
    }
    return res;
}
/**************************************************************
	Problem: 3300
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
