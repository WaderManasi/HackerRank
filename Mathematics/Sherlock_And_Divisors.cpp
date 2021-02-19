#include <bits/stdc++.h>
using namespace std;

int divisors(int n) {
    if (n%2 != 0) return 0; //number is odd
    int ct=1;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            if(i%2 == 0)
            ct++;
            if((n/i)%2 == 0)
            ct++;
            if(i == (n/i))
            ct--;
        }
    }
    return ct;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = divisors(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
