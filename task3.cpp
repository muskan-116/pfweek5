#include <iostream>
using namespace std;
bool reverse(int value);

main()
{
	int value,total;
	cout<<" enter three digit number ";
	cin>>value;
	total=reverse(value);
	if(total==true)
{

	cout<<"symmtrical :";
}
if(total==false)
{
	cout<<" non symitrical : ";
}
}
	bool reverse(int value)
{
	int rem1,rem2,rem3,rem4;
	rem1=value%10;

	rem2=value/10;

	rem3=rem2%10;

	rem4=rem2/10;

	if(rem1==rem4)
{
	return true;
}
	if(rem1!=rem4)
{
	return false;
}
	return 0;

}
