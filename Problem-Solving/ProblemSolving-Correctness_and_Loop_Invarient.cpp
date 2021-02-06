#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int no;
    int arr[1000];
    cin>>no;
    for(int i=0;i<no;i++)
        cin>>arr[i];
    sort(arr,arr+no);
    for(int i=0;i<no;i++)
        cout<<arr[i]<<" ";
    return 0;
}
