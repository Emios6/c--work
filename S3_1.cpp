#include<iostream>
using namespace std;
int main()
{
	int x,y;
	for(x=1;x<30;x++)
	for(y=1;y<30;y++)
	if(2*x+4*y==90&&x+y==30)
	{
		cout<<"���У�"<<x<<'\n'<<"���У�"<<y<<endl; 
	}
	return 0;
}
