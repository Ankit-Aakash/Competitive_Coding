#include<bits/stdc++.h>
using namespace std;
bool isprime(int ele)
{
    for(int i=2;i<=ele/2;i++)
    {
        if(ele%i==0)
            return false;
    }
    return true;
}

int main()
{
    int num1=4,num2=40,count=0;
    
    
    for(int i=num1;i<=num2;i++)
    {
        if(isprime(i) && isprime(i+6) && (i+6<num2))
            count+=1;
    }
    cout<<count;
    return 0;
}