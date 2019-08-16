#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int tc,ele,diff=0,no;//k=0;
     vector<int> vec;
     //vector<pair<int,int>>res;
     cout<<"Enter the no of testcases: ";
     cin>>tc;
     for(int i=0;i<tc;i++)
     {
         cout<<"Enter the no of elements: ";
         cin>>no;
         for (int j = 0; j < no; j++)
         {
            cin>>ele;
            vec.push_back(ele);
         }
         sort(vec.begin(),vec.end());
         diff=abs(vec[0]-vec[1]);
         cout<<vec[0]<<","<<vec[1]<<endl;
        //  res.push_back(pair<int,int>(vec[0],vec[1]))
        //  for(int j=1;j<vec.size();j++)
        //  {
        //      if( j+1 < vec.size && diff == abs(vec[j]-vec[j+1]))
        //         res.push_back(pair<int,int>(vec[j],vec[j+1]));

        //  }
        //  while (!res.empty())
        //  {
        //      cout<<res[k++];
        //  }
        for (int j = 1; j < vec.size(); j++)
        {
            if( j+1 < vec.size() && diff == abs(vec[j]-vec[j+1]))
                cout<<vec[j]<<","<<vec[j+1]<<endl;
        }
        
     }
     
     
     return 0;
 }