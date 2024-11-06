#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n,ma,m1;
    cin>>n;
    for(int m=1;n-2*m>0;m++){
        m1=m-1;
        ma=max((int)pow((n-2*m),2)*m,ma);
    }
    cout<<ma;    
}
/**************************************************************
	Problem: 22515
	Language: C++
	Result: 正确
	Time:1 ms
	Memory:2220 kb
****************************************************************/
