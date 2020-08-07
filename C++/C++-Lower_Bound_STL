#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr;
    int N,no,Q,Y;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>no;
        arr.push_back(no);
    }
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin>>Y;
        auto it=lower_bound(arr.begin(),arr.end(),Y);
        //lower_bound function from STL is used get starting pointer
        cout<<(*it==Y?"Yes ":"No ")<<it-arr.begin()+1 << endl;
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////
