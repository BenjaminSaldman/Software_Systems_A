#include "NumClass.h"
#include <stdio.h>
int calc(int, int);
int reverse(int,int);
int pow1(int, int);

int isArmstrong(int Number)
{
int Sum = 0, Times =0,Temp; 
  Temp = Number;
  while (Temp != 0) 
   {
     Times = Times + 1;
     Temp = Temp / 10;
   }

  Sum = calc (Number, Times);

  if ( Number == Sum )
      return true;
  else
      return false;
}

int calc (int Number, int Times)
{
   
  
  if (Number > 0)
   {
     return pow1(Number%10,Times)+calc(Number/10,Times);
   }
   else
     return 0;
}

int isPalindrome(int num)
{
    if (num == reverse (num,0))
    {
        return true;
    }
    return false;
}


int reverse(int num,int sum)
{

    if(num==0)
    {
        return sum;
    }
    sum=sum*10+(num%10);
    return reverse(num/10,sum);
}
int pow1(int num, int n)
{
    if(n == 0)
        return 1;
    int k = num;
    for(int i = 1; i < n; i++) 
    {
        num *= k;
    }
    return num;
} 