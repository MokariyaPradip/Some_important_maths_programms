/********Program to whether the given number is Armstrong or not*************/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef unsigned long long int ull;

int check_armstrong(ull num)
{
    ull sum=0,temporary=num;
    int power=0;
    while(num)
    {
        num=num/10;
        power++;
    }
    num=temporary;
    while(num)
    {
        sum+=pow(num%10,power);
        num=num/10;
    }
    if(sum==temporary)
    {
        return 1;
    }
    else
    {
      return 0;
    }
}
int main() 
{
    ull num;
    scanf("%llu",&num);
    if(check_armstrong(num))
    {
        printf("%llu is Armstrong Number.\n",num);
    }
    else 
    {
        printf("%llu is Not Armstrong Number.\n",num);
    }
    return 0;
}

