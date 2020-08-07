////Java Solution/////
////////////////////////////////////////////////////////
class Calculator implements AdvancedArithmetic {
    public int divisorSum(int n) {
        int factor_sum=0;
        int i;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                {
            factor_sum+=i;
                }
        }
        return factor_sum;
        //returns sum of total factors of given number
    }
}
/////////////////////////////////////////////////////////
