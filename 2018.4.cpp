#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a[20];
	for(int i=0;i<20;i++)
		a[i]=rand()%100;
	for(int i=0;i<20;i++)
		cout<<a[i]<<'\t';
	cout<<endl;
	int max=a[0];
	for(int i=0;i<20;i++)
		if(a[i]>max)
		max=a[i];
		cout<<"最大值："<<max<<endl;
	int count=0;
	for(int i=0;i<20;i++)
		if(a[i]%2==0)
		count++;
	cout<<"偶数："<<count<<"个"<<endl;
	return 0; 
}
