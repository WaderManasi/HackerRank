#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
////////////////////////////////////////////////////////
int main()
{
    int n,h,i;
    int arr[100];
    cin>>n;
    cin>>h;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int b=arr[n-1];
    if(b>h)
        i=b-h;
    else
        i=0;
    cout<<i;
    //return the height
    return 0;
}
/////////////////////////end of code////////////////////
