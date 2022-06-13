//counting sort
#include <iostream>
#include<climits>
using namespace std;
void primeseive(long long  *a,long long  n)
{
    for(int i=3;i<1000;i+=2)
    {
         a[i]=1;
    }
    for(int i=3;i<n;i+=2)
    { 
        if(a[i]==1)
        {
             for(int j=i*i;j<1000;j+=i)
             {
                a[j]=0;
             }
        }
   }
    //special cases
    a[0]=a[1]= 0;
    a[2]=1;
}
int main() {
    long long n;
    cin>>n;
    long long  a[1000]={0};
    primeseive(a,n);
    for(int i=0;i<=n;i++)
    {
        if(a[i]==1)
        {
            cout<<i<<endl;
        }
    }
    cout<<endl;
    return 0;
}   

