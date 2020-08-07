/////////////////////////////////////////////////////////////////////////////////////////////////////
//CPP solution

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;  // array size
    int k;  //no of rotations
    int q; 
    cin>>n>>k>>q;

    vector<int>v;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }

    k = k % n;
    k = n - k;
    rotate(v.begin(), v.begin()+k,v.end());

    while(q--)
    {
        int index; 
        cin >> index;
        cout << v[index]  << endl;
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
