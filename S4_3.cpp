#include<iostream>
using namespace std;
int main()
{
	int a,i=2;
	cout<<"请输入一个正整数：";
	cin>>a;
	for(;i<a;i++)
	if(a%i==0) break;
	if(i>=a/2)
		cout<<a<<"是素数\n";
	else
	 	cout<<a<<"不是素数\n";	
	return 0; 
}
