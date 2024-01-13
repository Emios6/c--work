#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,area;
	cout<<"请输入三角形边长a=";
	cin>>a;
    cout<<"请输入三角形边长b=";
	cin>>b;
	cout<<"请输入三角形边长c=";
	cin>>c;
	s=a+b+c;
	area=sqrt(s/2*(s/2-a)*(s/2-b)*(s/2-c));
	cout<<"三角形周长s="<<s<<'\n'<<"三角形面积area="<<area;
    return 0;
}
