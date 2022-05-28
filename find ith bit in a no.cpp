
//find the ith bit in a no
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int mask=1<<i;
    int ans=n & mask;
    if(ans!=0)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }



    return 0;
}
