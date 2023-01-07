#include <iostream>
using namespace std;
main()
{
int number,rem1,div1,rem2,div2,sum;
cout<<"enter number :";
cin>>number;
rem1=number%10;
div1=number/10;
div2=div1/10;
rem2=div1%10;
sum=rem1+div2+rem2;
cout<<"number "<<sum<<endl;
if(sum%2==0)
{
cout<<"number is evenish ";
}
if(sum%2==1)
{
cout<<"number is oddish ";
}
}