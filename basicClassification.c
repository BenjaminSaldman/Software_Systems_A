#include "NumClass.h"

int factorial(int num)
{
    int sum = 1;
    for(int i = num; i > 0; i--)
    {
        sum *= i;
    }
    return sum;
}

int isStrong(int num)
{
    int sum = 0;
    int temp = num;
    while(num > 0)
    {
        sum += factorial(num % 10);
        num /= 10;
    }
    if(sum == temp)
        return true;
    else return false;
} 

int isPrime(int num)
{
    if(num < 1)
        return false;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
            return false;
    }
    return true;
}