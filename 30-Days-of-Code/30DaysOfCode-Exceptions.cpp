#include<iostream>
using namespace std;
/////////////////////////////////////////////////////////////////
int main(){
    string S;
    cin >> S;
    try
    {
        int no;
        no=stoi(S);
        //stoi() function converts string to integer
        cout<<no<<endl;
    }
    catch(exception e)
    {
        cout<<"Bad String";
    }
    return 0;
}
///////////////////////////end of code/////////////////////////
