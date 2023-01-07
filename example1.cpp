#include <iostream>
using namespace std;

	float  div(int num1,int num2);
	int maximum(int number1,int number2);

	
main()
{
  	int number1,number2,total,max;
	cout<<"enter number1 :"<<endl;
	cin>>number1;
	cout<<"enter number2 :"<<endl;
	cin>>number2;
	total=div(number1,number2);
	cout<<"divide :"<<total<<endl;

	max=maximum(number1,number2);
	cout<<"greater number is : "<<max<<endl;


}
	float  div(int num1,int num2)
{

	int divide;
	divide=num1/num2;
	return divide;

}
	int maximum(int number1,int number2)
{
	if(number1>number2)
{
	return number1;
}
if(number2>number1)
{
	return number2;
}
return o;
}