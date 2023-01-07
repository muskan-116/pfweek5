#include <iostream>
using namespace std;
int mul(int number);
main()
{
int number,add;
cout<<"enter number : "<<endl;
cin>>number;
add=mul(number);
cout<<" number is : "<<add;
}
int mul(int number)
{
int number2;
number2=number*5;
return number2;
}

