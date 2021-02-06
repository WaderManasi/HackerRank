///////////////////////////C++ solution////////////////////////////////////////////

int divisibleSumPairs(int n, int k, vector<int> arr) {
    int sum=0,ct=0;
    int brr[1000];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j && (arr[i]+arr[j])%k==0)
            {
                ct++;
            }
        }
    }
    return ct;
}

/////////////end of function/////////////////////////////////////////////////////////
