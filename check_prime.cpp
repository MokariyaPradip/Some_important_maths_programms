#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int a)
{
    int j;
    if(a==1)
        return 0;
    if(a==2||a==3||a==5||a==7)
        return 1;
    else if((!(a%2))||(!(a%3))||(!(a%5))||(!(a%7)))
            return 0;
   
    else if((a+1)%6==0||(a-1)%6==0)
            return 1;
    return 0;
}

int main() {
    int n;
    cin >> n;
    int a,i;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(isprime(a))
            cout << a << " ";
        
    }
    return 0;
}
