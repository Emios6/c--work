#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,p,s;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		p=(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<s;
	}
	else
	cout<<"不能构成三角形";
}
