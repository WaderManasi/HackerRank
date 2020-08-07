////////////////////////////////////////////////////////////////
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int Q,y,x;
    cin>>Q;
    set<long int>s;
    for(int i=0;i<Q;i++)
    {
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else
        if(y==2)
            s.erase(x);
        else
        {
            if(s.end()==s.find(x))
                cout<<"No"<<"\n";
            else
                cout<<"Yes"<<"\n";
        }
    }
    return 0;
}
///////////////////////////////////////////////////////////////////
