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
	cout<<"������һ������������0��������";
	cin>>n;
	while(n)
	{
		mul=fun(n);
		cout<<n<<"�ĸ���λ��֮����"<<mul<<endl;
		cout<<"������һ������������0��������";
		cin>>n; 
	 } 
	 return 0;
}

