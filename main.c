#include "NumClass.h"
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("The Armstrong numbers are: ");
    for(int i = a; i <= b; i++)
    {
        if(isArmStrong(i)==true){
            printf(" %d", i);
        }
    }
    printf("\n");
    printf("The Palindromes are: ");
    for(int i = a; i <= b; i++)
    {
        if(isPalindrome(i)==true){
            printf(" %d", i);   
        }
    }
    printf("\n");
    printf("The Prime numbers are: ");
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i)==true){
            printf(" %d", i);       
        }
    }
    printf("\n");
    printf("The Strong numbers are: ");
    for(int i = a; i <= b; i++)
    {
        if(isStrong(i)==true){
            printf(" %d", i);
        }
    }
    printf("\n");
}