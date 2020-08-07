///////////////////////////////////////C++ solution////////////////////////

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//function to return string 
/////////////////////////////////////////////////
string catAndmouse(int xa,int yb,int zc)
{
    int arr[10000];
    if(abs(zc-xa) == abs(zc-yb))
        return "Mouse C";
    else
    {
        arr[0]=abs(zc-xa);
        arr[1]=abs(zc-yb);
        return arr[0]>arr[1]?"Cat B":"Cat A";
    }    
}
//////////////////////////////////////////////////
int main()
{
    int q,xa,yb,zc;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>xa>>yb>>zc;
        cout<<catAndmouse(xa,yb,zc)<<"\n";
    }
    return 0;
}
/////////////////////////////end of code/////////////////////////////////
