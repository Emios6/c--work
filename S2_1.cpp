#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"input a b c\n";
	cin>>a>>b>>c;
	if((a=b<=c)||(a=c<=b)||(b=c<=a))
	   cout<<"Triangle\n";
	else
	   cout<<"Not Triangle\n";
	return 0;
}
