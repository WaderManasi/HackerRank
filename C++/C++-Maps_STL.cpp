//////////////////////////////////////////////////////////////////////////////////////
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    //In map,first field is key_type,second is data_type
    map<string,int>m;
    string name;
    int type,Q,marks;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>type>>name;
        auto itr = m.find(name);
        switch(type)
        {
            case 1:
                    cin>>marks;
                    if(itr!=m.end())
                        m[name]=m[name]+marks;
                    else
                        m.insert(make_pair(name,marks));
                    break;
            case 2:
                    if(itr!=m.end())
                        m.at(name)=0;
                    break;
            case 3:
                    if(itr!=m.end())
                        cout<<m[name]<<"\n";
                    else
                        cout<<"0"<<"\n";
                    break;
        }
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////
