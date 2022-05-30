//unique no 3
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
//step1
int freq[64]={0};

for(int j=0;j<n;j++)
{
    int i=0;
    int value=a[j];
    while(value>0)
    {
    freq[i]+=(value&1);
    i++;
    value=value>>1;
    
    }
}
//step2
int ans=0;
int p=1;
for(int i=0;i<64;i++)
{
    freq[i]=freq[i]%3;
    ans=ans+(freq[i]*p);
    p=p<<1;//p=p*2;

}
cout<<ans<<endl;
return 0;

}
