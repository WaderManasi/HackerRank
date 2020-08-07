//////////////////////////////C++ solution//////////////////////////////////////

#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
/////////////////////////////////////////////////////////////////////////////////
void serviceLane(vector<long int>all,int test1,int test2)
{
    vector<int>index;
    for(int i=test1;i<=test2;i++)
    {
        index.push_back(all[i]);      
    }
    sort(index.begin(),index.end());
    cout<<index[0]<<"\n";
}
/////////////////////////////////////////////////////////////////////////////////
int main()
{
    vector<long int>all,test;
    int tot,ts,temp;
    cin>>tot>>ts;
    for(int i=0;i<tot;i++)
       {
           cin>>temp;
           all.push_back(temp);
       }
    for(int j=0;j<ts;j++)       //no of test cases
    {
            int test1,test2;
            cin>>test1>>test2;
            serviceLane(all,test1,test2);   
    }
    return 0;
} 
//////////////////////////end of code/////////////////////////////////////////////
