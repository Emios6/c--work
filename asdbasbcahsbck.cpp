#include<iostream>
using namespace std;
int px(int a[],int n)
{
	int i,j,max,t,count=0;
	for(j=0;j<n-1;j++)
	{
		max=j;
		for(i=j+1;i<n;i++)
			if(a[max]>a[i])
				max=i;
				t=a[max];
				a[max]=a[j];
				a[j]=t;
	}
	for(int i=0;i<20;i++)
	{
		count++;
		cout<<a[i]<<'\t';
		if(count%5==0)
		cout<<endl;
	}
	return 0;
}
int main()
{
	int a0=1,b=0;
	int x;
	cin>>x;
	int a[10];
	while(x)
	{
		a[b]=x%10;
		x=x/10;
		b++;
	}
	for(int i=0;i<10;i++)
		cout<<a[i]<<'\t';
	px(a,10);
	return 0;
}
	
