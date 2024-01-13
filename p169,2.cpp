
#include<iostream>
using namespace std;
int main()
{
	int a[8][8];
	int i,j;
	for(i=0;i<8;i++)
	{
		a[i][0]=1;
		a[i][i]=1;
	}
	for(i=2;i<=8;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for(i=0;i<=7;i++)
		{
		for(j=0;j<=i;j++)
		cout<<a[i][j]<<'\t';
		cout<<endl;	
		}
	return 0;
}
