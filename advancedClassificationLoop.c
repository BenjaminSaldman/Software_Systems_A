#include "NumClass.h"

int pow1(int, int);

int len(int num)
{
    int len = 0;
    while(num != 0)
    {
        num /= 10;
        len++;
    }
    return len;
}

int isPalindrome(int num)
{
    int temp = 0;
    int k = num;
    while(k != 0)
    {
        temp = temp * 10 + k % 10;
        k /= 10;
    }
    if(temp == num)
        return true;
    return false;
} 

int isArmStrong(int num)
{
    int k = len(num);
    int sum = 0;
    int temp = num;
    while(temp != 0)
    {
        sum += pow1(temp % 10, k);
        temp /= 10;
    }
    if(sum == num)
        return true;
    return false;
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