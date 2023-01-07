#include <iostream>
#include <cmath>
using namespace std;
float calculateHeight(float base, float degrees);

main()
{
	float base,degrees,height;
cout<<"enter base : "<<endl;
cin>>base;
cout<<"angle of elevation: "<<endl;
cin>>degrees;
height=calculateHeight(base,degrees);
cout<<"height of tree :"<<height;	
	
}
float calculateHeight(float base, float degrees)
{
float radian=57.2958;
float radians;
float angle,height;
radians=degrees/radian;
angle=tan(radians);
height=angle*base;
return height;
}
