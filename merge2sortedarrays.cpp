//merge 2 sorted arrays

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a[1000];
    int b[1000];
    int n;
    cin>>n;
   
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=n-1;
    int j=m-1;
    int k=(m+n)-1;
    while(i>=0 && j>=0)
    {
        if(a[i]<b[j])
        {
           a[k]=b[j];
           k--;
           j--;
        }
        else
        {
           a[k]=a[i];
           k--;
           i--;
        }
    }
    while(j>=0)
    {
       a[k]=b[j];
       k--;
       j--;

    }
    while(i>=0)
    {
        a[k]=a[i];
        k--;
        i--;
    }
    for(int i=0;i<m+n;i++)
    {
      cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;

}

