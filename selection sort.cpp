//selection sort
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //har element apni correct pos pe dale
    
    for(int i=0;i<=n-2;i++)
    {
        //find min element
        int min=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(a[min]>a[j])
            {
               min=j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
