/////////////////////////////////C++ solution/////////////////////

////function to return count of numbers whose differece between 
//the number itself and irs reverse is divisible by given value
int beautifulDays(int i, int j, int k) {
    int count = 0;

    for(int a=i;a<=j;a++)
        {
            int r = a;
            int q = 0;
            while(r>0)
         {
            q = q * 10 + r % 10;
            r /= 10;
         }
        if(abs(a - q) % k == 0)
            count++;
    }
    return count;
}
///////////end of function////////////////////////////////////////
