#include <iostream>
#include <cmath>
using namespace std;
float quadplus(float a,float b,float c);
float quadminus(float a,float b,float c);
main()
{
	float a,b,c,formula,formula1;
	cout<<" enter value of a: "<<endl;
	cin>>a;
	cout<<" enter value of b: "<<endl;
	cin>>b;
	cout<<" enter value of c: "<<endl;
	cin>>c;
	formula=quadplus(a,b,c);
	cout<<" answer is : "<<formula<<endl;
	formula1=quadminus(a,b,c);
	cout<<" answer is : "<<formula1<<endl;
}
	float quadplus(float a,float b,float c)
{
	float x,y,z,l;
	float power=pow(b,2);
	y=power-(4*a*c);
	float sqroot=sqrt(y);
	l=-b+sqroot;
	z=2*a;
	x=l/z;
	return x;
}
	float quadminus(float a,float b,float c)
{
	float x,y,z,l;
	float power=pow(b,2);
	y=power-(4*a*c);
	float sqroot=sqrt(y);
	l=-b-sqroot;
	z=2*a;
	x=l/z;
	return x;
}