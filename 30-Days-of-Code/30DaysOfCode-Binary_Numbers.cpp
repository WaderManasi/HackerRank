////////////////////////////////C++ solution/////////////////////////////////
void binary(int n)
{
    int ct=0;
    int i=0;
    int j=0;
    int t=0;
    vector<int>bin;
    i=n;
    while(i>0)
    {
        j=i%2;
        if(j==1)
        {
            ct++;
            if(ct>=t)
            t=ct;
        }
        else
            ct=0;
        bin.push_back(j);
        i=i/2;
    }
  cout<<t;
}
/////////////////////////////////////////////////////////////////////////////
