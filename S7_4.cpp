#include<iostream>
using namespace std;
int fun(int a)
{
	int s=1;
	while(a)
	{
		s=s*(a%10);
		a=a/10;
	}
	return s;
}
int main()
{
	int n,mul;
	cout<<"请输入一个整数（输入0结束）：";
	cin>>n;
	while(n)
	{
		mul=fun(n);
		cout<<n<<"的各个位数之积是"<<mul<<endl;
		cout<<"请输入一个整数（输入0结束）：";
		cin>>n; 
	 } 
	 return 0;
}

