///////////////////////////////////c++ solution////////////////////////////////

#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;

int main()
{
    long int T,p1,p2;
    cin>>T;
    for(int k=1;k<=T;k++)
    {
        int ans=0;
        cin>>p1>>p2;
        for(int i=1;i<p1;i++)
            {
                for(int j=i+1;j<=p1;j++)
                {
                int amp1 = i&j;
                if(amp1 < p2 && amp1 > ans)
                    ans = amp1;                    
            }
            }
            cout<<ans<<"\n";
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
