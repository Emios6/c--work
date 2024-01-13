#include<iostream>
using namespace std;
int main()
{
	int i=0,b,j,t,x;
	int a[100];
	cin>>x;
	while(x)
	{
		a[i]=x%10;
		x=x/10;
		i++; 
	}
	b=i;
	for(i=0;i<b-1;i++)
		for(j=0;j<=b-i-1;j++)
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0;i<b;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	return 0;
}
