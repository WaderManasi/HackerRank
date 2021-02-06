#include <bits/stdc++.h>
using namespace std;
// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int v1[26]={0},v2[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        v1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++)
    {
        v2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        //cout<<v1[i]<<"="<<v2[i]<<"\n";
        if(v1[i] >=1 && v2[i]>=1)
        {
            return "YES";
        }
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
