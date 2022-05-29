//no of bits req to change to convert a to b
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int x=(a^b); 
    int count =0;
    while(x!=0)
    {
        if(x&1)
        {
            count++;
        }
        x=x>>1;

    }
    cout<<count<<endl;
}
