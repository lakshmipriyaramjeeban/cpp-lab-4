#include <iostream>
#include <cmath>
using namespace std;

//Function to check Prime number or not
int Prime(int num)
{
  int count=0;
  for(int i=2;i<num;i++)
  {
   if(num%i==0)
   count++;
  }
  if(count==0)
    cout<<"\n "<<num<<" is a prime number.\n";
  else
    cout<<"\n "<<num<<" is not a prime number. \n";
  return 0;
}
