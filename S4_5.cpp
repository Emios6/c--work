#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a=1;a<=1000;a++)
	{
		b=a;
		c=0;
		for(int d=1;d<a;d++)
		{
			if(b%d==0)
				c=c+d;
		}	
		if(b==c)
			cout<<b<<endl;
	}
	return 0;	
}
