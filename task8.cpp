#include <iostream>
using namespace std;
main()
{
float volume,pipe1,pipe2,workerAbsent,poolfilled,poolpercentage,percent1,percent2,overflows;
cout<<"enter volume of pool :";
cin>>volume;
cout<<"enter flow rate of pipe1 :";
cin>>pipe1;
cout<<"enter flow rate of pipe2 :";
cin>>pipe2;
cout<<"worker absent :";
cin>>workerAbsent;
poolfilled=volume-(workerAbsent*pipe1 +workerAbsent*pipe2);
cout<<poolfilled<<endl;
poolpercentage=poolfilled*100/volume;
percent1=(pipe1*100)/volume;
percent2=(pipe2*100)/volume;
overflows=-poolfilled;
if(overflows<volume)
{
cout<<"pool is "<<poolpercentage<<"% filled"<<endl;
cout<<"pipe1 is "<<percent1<<"% "<<endl;
cout<<"pipe2 is "<<percent2<<"% "<<endl;
}
if(overflows>volume)
{
cout<<"for "<<workerAbsent<<" hours the pool overflows with ";
cout<<overflows<<"litres"<<endl;

}
}