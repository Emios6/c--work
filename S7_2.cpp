#include<iostream>
using namespace std;
int prime(int num)
{
	for(int i=2;i<num;i++)
	if(num%i==0)
		return 0;
	return 1;
}
int main()
{
	int n;
	cout<<"请输入一个整数n：";
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(prime(i)&&n%i==0)
			cout<<i<<'\t';		
	} 
	cout<<endl;
	return 0;
}
