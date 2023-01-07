#include <iostream>
using namespace std;


int  add(int num1,int num2);
main()
{
int number1,number2,total;
cout<<"enter number1"<<endl;
cin>>number1;
cout<<"enter number2"<<endl;
cin>>number2;
total=add(number1,number2);
cout<<"sum :"<<total;



}
int  add(int num1,int num2)
{

int sum;
sum=num1+num2;
return sum;




}