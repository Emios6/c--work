#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i=i+1)
	{
		sum=sum+i;
		if(sum%5==0) break;
	}
	cout<<"sum="<<sum<<endl;
	cout<<"i="<<i<<endl;
	return 0;
	
}
