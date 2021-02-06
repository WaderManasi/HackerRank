#include <bits/stdc++.h>
#include<iostream>
#include <cmath>
using namespace std;
////////////////////////////////////////fuction to display grades/////////////////////
void display(int arr[],int size)
{
  int a,b;
  for(int i=0;i<size;i++)
  {
     if(arr[i]%5 <3 || arr[i]<38)
    {
        cout<<arr[i]<<"\n";
    }
    else
   {     
     while(arr[i]%5!=0)
     {
        arr[i]=arr[i]+1;
     }
     cout<<arr[i]<<"\n";
    } 
  }
}
///////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    display(arr,n);
    return 0;
}
//////////////////////////////end of code///////////////////////////////////////////////
