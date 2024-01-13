#include<iostream>
using namespace std;
int main()
{
	int a[1000];
	int x,i,n;
	char b[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cin>>x;
	i=0;
	while(x)
	{
		a[i]=x%16;
		x=x/16;
		i++;
	}
	n=i;
	for(i=n-1;i>=0;i--)
		cout<<b[a[i]];
		cout<<endl;
	return 0;
} 
