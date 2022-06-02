//sort an array of 0 1 2 in linear time
#include <iostream>
using namespace std;
  
int main() {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==2)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;

}
