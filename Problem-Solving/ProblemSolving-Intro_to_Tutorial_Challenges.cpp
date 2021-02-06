///////////////////////////////////////////////function to return position of desired element/////
int introTutorial(int V, vector<int> arr) {
    int i;
    for( i=0;i<arr.size();i++)
    {
        if(arr[i]==V)
        {
           
            break;
        }
    }
    return i;
}
/////////////////end of function/////////////////////////////////////////////////////////////////////
