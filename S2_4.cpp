#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,x1,x2,d,e;
	cout<<"������һԪ���η��̵�ϵ��a=";
	cin>>a;
	cout<<"������һԪ���η��̵�ϵ��b=";
	cin>>b;
	cout<<"������һԪ���η��̵�ϵ��c=";
	cin>>c;
	d=sqrt(b*b-4*a*c)/(2*a);
	e=-b/(2*a);
	x1=e+d;
	x2=e-d;
	if((b*b-4*a*c)<0)
	   cout<<"��ʵ����";
	else
	   cout<<"x1="<<x1<<'\n'<<"x2="<<x2<<endl;
	return 0;
}

