#include<iostream>
using namespace std;
int main()
{
	int a0,a1,a2;
	int b;
	for(a2=1;a2<=9;a2++)
	for(a1=0;a1<=9;a1++)
	for(a0=1;a0<=9;a0++)
	{
		b=a0+a1*10+a2*100;
		if(b==a0*a0*a0+a1*a1*a1+a2*a2*a2)
		cout<<"该数是水仙花数"<<b<<endl;
	}
	return 0;
}
