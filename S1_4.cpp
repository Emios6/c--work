#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,area;
	cout<<"�����������α߳�a=";
	cin>>a;
    cout<<"�����������α߳�b=";
	cin>>b;
	cout<<"�����������α߳�c=";
	cin>>c;
	s=a+b+c;
	area=sqrt(s/2*(s/2-a)*(s/2-b)*(s/2-c));
	cout<<"�������ܳ�s="<<s<<'\n'<<"���������area="<<area;
    return 0;
}
