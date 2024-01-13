#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
	float y;
	y=x*x+3*x-4;
	return y;
}
float df(float x)
{
	float y;
	y=2*x-3;
	return y;
}
float ef(float x)
{
	float y;
	if(fabs(f(x))<1e-5)
		y=x;
	else 
		y=ef(x-f(x)/df(x));
	return y;
}
int main()
{
	float x1;
	x1=0;
	cout<<"x="<<ef(x1)<<endl;
}
