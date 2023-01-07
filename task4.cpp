#include <iostream>
using namespace std;

char alpha1(char word1);
char alpha2(char word2);
main()
{
char character,letter1,letter2;
cout<<"enter charcater : ";
cin>>character;
letter1=alpha1(character);
if(letter1!=0)
{
cout<<"this is upper case :  "<<letter1;
}

letter2=alpha2(character);
if(letter2!=0)
{
cout<<"this is lower case :"<<letter2;
}
}
char alpha1(char word1)
{
if(word1>='A'&& word1<'Z')
{
return word1;

}
return 0;
}
char alpha2(char word2)
{
if(word2>='a'&& word2<'z')
{
return word2;

}
return 0;
}