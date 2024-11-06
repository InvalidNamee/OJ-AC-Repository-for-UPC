void Fun(char s[])
{
    char t[1010];
    strcpy(t, s);
    int l = 0;
    for (int i = 0; i < strlen(t); ++i) {
        if (isalpha(t[i])) s[l++] = t[i];
    }
    for (int i = 0; i < strlen(t); ++i) {
        if (isdigit(t[i])) s[l++] = t[i];
    }
    s[l] = '\0';
}

/**************************************************************
	Problem: 23663
	Language: C++
	Result: 正确
	Time:3 ms
	Memory:2220 kb
****************************************************************/
