//maximum xor no
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int max=x^y;
    int count=0;
    while(max>0)
    {
      count++;
      max=max>>1;
    }
    int ans=0;
    int p=1;
    while(count>0)
    {
        ans=ans+p;
        p=p<<1;
        count--;
    }
    cout<<ans<<endl;

}   

   
