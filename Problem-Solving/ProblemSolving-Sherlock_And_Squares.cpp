///////////////////////C++ solution////////////////////////////

/////function to check no of squared nos in given range
int squares(int a, int b) 
{
    int count=0;
    int x=1;
    while(x*x < a)
    {       
        x++;
    }
    while(x*x <= b)
    {
       count++;
        x++;
    }
    return count;
}
//////////////////////////////////////////////////////////////////
