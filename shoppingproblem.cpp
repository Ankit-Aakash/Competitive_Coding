#include<bits/stdc++.h>
using namespace std;
int fact(int num)
{
    return((num==0||num==1) ? 1:num*fact(num-1));
}

int main()
{
    int n,k,sum=0,r=2;
    cout<<"Enter the variety of product available in Mart"<<endl;
    cin>>n;
    cout<<"Enter the no of product the person can purchase"<<endl;
    cin>>k;
    if(k==1)
    {
        sum=n;
    }
    else
    {
        sum=n;
        while (r<=k)
            {
                //cout<<sum<<endl;
                sum= sum +(n+fact(n)/(fact(n-r)*fact(r)));
                r++;
            }
    }
    cout<<"No of ways in which items that can be purchased are: "<<sum<<endl;
    return 0;
}