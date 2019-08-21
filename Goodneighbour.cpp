// "Not every love story has a happy ending!"- Little Jhool was certainly a con man, fooling people by telling them about their future, [The first problem!] but he loved his girl - truly! But, Big Jhool, his girlfriend, was shocked and had broken up with him after getting to know that Little Jhool was a con man. Now, our hero of this problem set, little Jhool is upset, and he's unable to get over her (Or, back with her, for that matter!) and he's sure that somewhere deep down she still loves him!

// And to verify her love for him, he's using the good, old, tested formula by the lovers of tearing off the petals of a flower one by one, and saying, "She loves me!", "She loves me not!" Now, he's standing in the garden of your house, and plucking off the petals of as many flowers as he sees everyday. Obviously, he's so obsessed with his ex, that he wants to stop at "She loves me!" and not very surprisingly, start off with "She loves me!" as well!**

// You're his neighbor, and you cannot bear him cry when the answer comes out to be "She loves me not!", so you decide to help him. Given n roses in his garden, you want to pick up a bouquet with maximum number of total petals (To keep him busy!) so that the result would be in little Jhool's favor ("She loves me!") and he wouldn't cry because of his lost love. A bouquet may even consist of a single flower, but you just have to make him not cry!

// Find the maximum number of rose petals possible in the bouquet of flowers. 

// LOGIC APPLIED: Odd no of odd petals rose: Sum will be the ans;
//                Even no of odd petals rose: Sum-smallest odd is the answer;
//                0 odd petals flowers:":(" will be the answer;

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,sum=0,ele,oddpetals=0;
    vector<int>petals;
    cout<<"Enter the num of roses"<<endl;
    cin>>num;
    cout<<"Enter the no of petals in each"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>ele;
        petals.push_back(ele);
        if(ele%2!=0)
            oddpetals++;//calculating odd petals roses.
        sum+=ele;
    }
    sort(petals.begin(),petals.end());
    if(oddpetals==0)
    {
        cout<<":("<<endl;
    }
    else if(oddpetals % 2 != 0)
    {
        cout<<sum<<endl;
    }
    else
    {
        for(int i=0;i<petals.size();i++)
        {
            if(petals[i] % 2 != 0)
            {
                sum-=petals[i];
                cout<<sum;
                break;
            }
        }
        
    }

return 0;
}