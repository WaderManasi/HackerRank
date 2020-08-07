////////////////////////////////////////////////////////////////////////////////
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int>arr;
    int tot,no,range1,range2,pos;
    cin>>tot;
    for(int i=0;i<tot;i++)
    {
        cin>>no;
        arr.push_back(no);
    }  
    cin>>pos;
    cin>>range1>>range2;
    
    //to remove element at index "pos"
    arr.erase(arr.begin()+(pos-1));
    
     //to remove element from index "range1" to "range2"
    arr.erase(arr.begin()+(range1-1),arr.begin()+(range2-1));
    
    cout<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////
