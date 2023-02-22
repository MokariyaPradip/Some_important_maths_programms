#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int a)
{
    int j;
    if(a==1)
        return false;
    if(a==2||a==3)
        return true;
    else if((!(a%2))||(!(a%3)))
            return false;
   
    else
    {
        for(int i=5; i*i <= a; i+=6)
        {
            if((a%i)==0 || (a%(i+2))==0)
                return false;
        }
    }
    return true;
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
