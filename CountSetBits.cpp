#include<bits/stdc++.h>
using namespace std;

//Brian Kernighan’s Algorithm
int countsetbits(int num)
{
    int count=0;
    while(num)
    {
        num &= (num-1);
        count++;
    }
    return count;
}

int main()
{
    int num,count;
    cout<<"Enter the number: ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        count=countsetbits(i);
        if((count+i) == num)
        {
            cout<<i<<endl;
            cout<<"0";
            return 0;
        }    

    }
    cout<<"1";
    return 0;
    
    
}

