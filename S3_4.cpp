#include<iostream>
using namespace std;
int main()
{
	int a=1,b,c,d;
	for(;a<=599;a++)
	{
	   	b=a%10;
		c=a/10%10;
		d=a/100;
		if((b==5||c==5||d==5)&&a%3==0)
		cout<<a<<'\t';
	}
	return 0;
}
	
