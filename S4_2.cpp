#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	cout<<"Input three number:";
	cin>>a>>b>>c;
	for(i=a;i>=1;i--)
	if(a%i==0&&b%i==0&&c%i==0) break;
	cout<<"最大公约数："<<i<<endl;
	return 0;
}
