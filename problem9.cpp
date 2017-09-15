#include <iostream>
#include <cmath>
using namespace std;

/*PROGRAM TO PRINT ALL PERFECT NUMBERS IN AN INTERVAL*/

int perfect(int num1, int num2)
{ 
  int tnum,sum,dig;
  int j=num1;
  while(j<=num2)
  {
  int i=1,sum=0;
  while(i<j)
  {
    if(j%i==0)
      sum=sum+i;
    i++;
  }
  if(sum==j)
         cout <<"\n"<< j  <<  " is a perfect number";
 j++;
 }
  return 0;
}
