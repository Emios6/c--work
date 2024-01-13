#include<iostream>
using namespace std;
int jiecheng(int n)
{
	int t=1;
	int y=1;
	for(int i=2;i<=n;i++)
		{
			t=t*i;
			y=y+t;
		}
	return y;
}
int main()
{
	int x;
	cin>>x;
	cout<<jiecheng(x);
}
