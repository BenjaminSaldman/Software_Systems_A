#include "NumClass.h"

int calc(int, int);
int reverse(int);
int pow1(int, int);

int isArmStrong(int num)
{
    int s = num;
    int len = 0;
    while(s != 0)
    {
        len++;
        s /= 10;
    }
    int k = calc(num, len);
    if (num == k)
        return true;
    return false;
}

int calc (int num, int len)
{
  static int Reminder, Sum = 0;
  if (num > 0)
   {
     Reminder = num % 10;
     Sum = Sum + pow1(Reminder, len);
     calc (num / 10, len);
     return Sum;
   }
    else
    return 0;
}

int isPalindrome(int num)
{
    if (num == reverse (num))
    {
        return true;
    }
    return false;
}


int reverse(int num)
{
    int reminder;
    static int sum = 0;
    if(num != 0) 
    {
        reminder = num % 10;
        sum = sum * 10 + reminder;
        reverse (num / 10);
    }
    else
        return sum;
    return sum;
}
int pow1(int num, int n)
{
    if(n == 0)
        return 1;
    int k = num;
    for(int i = 1; i <= n; i++) 
    {
        num *= k;
    }
    return num;
} 