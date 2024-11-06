void Fun(char s[],char t[],int *cnt)
{
    int l1 = strlen(s), l2 = strlen(t);
    for (int i = l2 - 1; i < l1; ++i) {
        bool f = true;
        for (int j = 0; j < l2; ++j) {
            if (t[j] != s[i - l2 + j + 1]) {
                f = false;
                break;
            }
        }
        if (f) (*cnt)++;
    }
}

/**************************************************************
	Problem: 23664
	Language: C++
	Result: 正确
	Time:13 ms
	Memory:2220 kb
****************************************************************/
