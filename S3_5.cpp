#include<iostream>
using namespace std;
int main()
{
	int a,b,sum=0;
	cout<<"������һ��������";
	cin>>a;
	while(a)
	{
		b=a%10;
		a=a/10;
		sum=sum+b;
	}
		cout<<sum<<endl;
	return 0;
}

