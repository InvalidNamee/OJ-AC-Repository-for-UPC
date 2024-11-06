/*只需要提交Fun函数即可*/
void Fun(int l, int r, int *cnt) {
    for (int i = l; i <= r; ++i) {
        string s = to_string(i);
        *cnt += s.front() == s.back();
    }
}
/**************************************************************
	Problem: 5232
	Language: C++
	Result: 正确
	Time:11 ms
	Memory:2220 kb
****************************************************************/
