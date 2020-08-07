////////////////////////////////C++ solution///////////////////////////////

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int fine;
    long int ay,ey;
    int ad,am;
    int ed,em;
    cin>>ad>>am>>ay;
    cin>>ed>>em>>ey;
    if(ad<=ed)
    {
        if(am<=em && ay==ey)
            fine=0;
        else
        if(am>em && ay==ey)
        fine=500*(am-em);
        else
        if(am<=em && ay>ey)
            fine=10000;
        else
        if(am>em && ay>ey)
        fine=1000;
    }
    else
    if(ad>ed)
   {
        if(am==em &&ay==ey)
        fine=15*(ad-ed);
        else
        if(am>em && ay==ey)
        fine=500*(am-em);
        else
        if(am<am && ay>ey)
        fine=10000;
        else
        if(am>em && ay>ey)
        fine=10000;
   }
   cout<<fine;
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////
