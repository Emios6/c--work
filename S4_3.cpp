#include<iostream>
using namespace std;
int main()
{
	int a,i=2;
	cout<<"������һ����������";
	cin>>a;
	for(;i<a;i++)
	if(a%i==0) break;
	if(i>=a/2)
		cout<<a<<"������\n";
	else
	 	cout<<a<<"��������\n";	
	return 0; 
}
