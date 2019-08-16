#include<bits/stdc++.h>
using namespace std;
// void showq(queue <char> gq) 
// { 
//     queue <char> g = gq; 
//     while (!g.empty()) 
//     { 
//         cout << '\t' << g.front(); 
//         g.pop(); 
//     } 
//     cout << '\n'; 
// } 

int main()
{
    int t;
    stack<char> chars;
    string str,rstr;
    cout<<"Enter the no of testcases: "<<endl;
    cin>>t;
    for (int  i = 0; i < t; i++)
    {
        cout<<"Enter the string: ";
        cin>>str;
        reverse(str.begin(),str.end());
        for (int j = 0; j < str.length(); j++)
        {
            //cout<<"Entered the first loop"<<endl;
            if(str[j] != '.')
            {
                //cout<<"Entered the !. cond"<<endl;
                chars.push(str[j]);
                //showq(chars);
            }
            else
            {
                //cout<<"Entered the else condition"<<endl;
                //rstr+='.';
                while(!chars.empty())
                {
                    rstr=rstr+chars.top();
                    //cout<<rstr<<" ";
                    chars.pop();
                }
                rstr+='.';

                
            }
            
        }
        while (!chars.empty())

        {
            rstr=rstr+chars.top();
            //cout<<rstr<<" ";
            chars.pop();
        }
        
        cout<<"Came out of the inner loop"<<endl;
        cout<<rstr<<endl;
        rstr="";
        

    }
    
    

}