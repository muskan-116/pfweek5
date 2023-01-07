#include <iostream>
using namespace std;
main()
{
int hour,hs,minutes,mints,mm,total,total2;
cout<<"enter hour : ";
cin>>hour;
cout<<"enter minutes : ";
cin>>minutes;
minutes=minutes+15;
mints=minutes%60;
mm=minutes/60;
hour=hour+mm;
if(hour>23)
{
hs=hour%24;
cout<<hs<<":"<<mints;
}
if(hour<23)
{
cout<<hour<<":"<<mints;
}
}