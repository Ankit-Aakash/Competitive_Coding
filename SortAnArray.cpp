#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,size,ele;
    vector<int> arr;
    cout<<"Enter the number of testcases"<<endl;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cout<<"Enter the size of the array"<<endl;
        cin>>size;
        cout<<"Enter the elements of the array."<<endl;
        for(int j=0;j<size;j++)
        {
            cin>>ele;
            arr.push_back(ele);
        }
        sort(arr.begin(),arr.end());
        for(int k=0;k<size;k++)
        {
            cout<<arr[k]<<"\t";
            arr.pop_back();//empty the array once used.
        }

    }
}