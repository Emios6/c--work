#include<iostream>
using namespace std;
int fun(int x)
{
	int i;
	for(i=2;i<x;i++)
		if(x%i==0)
			return 0;
	return 1;	
}
int main()
{
	int a,b,c;
	cout<<"������һ����С��6��ż����";
	cin>>a;
	for(b=1;b<=a/2;b++)
	{
		int t=a-b;
		if(fun(b)&&fun(t))
		cout<<a<<"="<<b<<"+"<<t<<endl;
	}
	return 0;
}
