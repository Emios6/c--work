#include<iostream>
using namespace std;
int main()
{
	int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},i,j;
	cout<<"要求和的数组："<<endl; 
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
				cout<<a[i][j]<<'\t';
				cout<<endl;
	}
	int num=0;
	for(i=0;i<4;i++)
	{
		num=num+a[i][i]+a[i][3-i];
	}
	cout<<num;
} 
