////////////////////////////////////////C++ solution//////////////////////////

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
///////////////////////////////////////////////////////////////////////////////
int hourglassSum(int arr[10][10]) {
    int x=0;
    int brr[16];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //calculate sum of hourglasses
            brr[x]=(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]);
            x++;
        }
    }
    sort(brr,brr+16);
    return brr[15];
}
//////////////////////////////////////////////////////////////////////////////////
int main()
{
    int arr[10][10];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<hourglassSum(arr);
    return 0;
}
/////////////////////////////////////////end of code/////////////////////////////////
