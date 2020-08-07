    int n;
    ////////////////////////////////////////////////////////////////////////////////////////
    Difference(vector<int>elements)
    {
        this->elements=elements;
        n=elements.size();
    }
    /////////////////////////////////////////////////////////////////////////////////////////
    void computeDifference()
    {
        int firs=0;
        int a=0;
        int diff[100];
        for(int i=0;i<n;i++)
        {
            firs=elements[i];
            for(int j=i+1;j<n;j++)
            {
                diff[a]=abs(firs-elements[j]);
                a++;
            }
        }
        sort(diff,diff+a);
        maximumDifference=diff[a-1];
    }
/////////////////////////////////////////////////displays maximum difference/////////////////////
