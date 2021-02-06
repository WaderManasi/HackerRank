/////////////////////////////////////////////////////////////////////////////////////////////////////
//CPP solution

#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {
    vector<int>v;
    for(int i=0;i<a.size();i++)
    {
        int num=a[i];
        for(int j=0;j<a.size();j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                int difference=abs(j-i);
                v.push_back(difference);
            }
        }
    }
    if(v.size()==0)
    return -1;
    sort(v.begin(),v.end());
    return v[0];
}
//////////////////////////////////////////////////////////////
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    int result = minimumDistances(a);
    fout << result << "\n";
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
