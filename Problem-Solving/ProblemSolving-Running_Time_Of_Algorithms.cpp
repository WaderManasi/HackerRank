////////////////c++ solution///////////////////////////////////
//to sort array containing unique as well as duplicate elements

int runningTime(vector<int> arr) {
    int max,temp,ct=0;
    for(int i=0;i<arr.size();i++)
    {
        int j = i;
        max = arr[i];
            while (j >= 1 && arr[j-1] >max)
            {
                arr[j] = arr[j-1];
                j--;
                ct++;
            }
            arr[j]=max;
    }
    return ct;
    //////////////////////////////////////////////////////////
