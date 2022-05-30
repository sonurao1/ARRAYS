//armstrong nos
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int count=0;
   int m=n;
   while(m!=0)
   {
      count++;
      m=m/10;

   }
   int ans=0;
   m=n;
   while(m!=0)
   {
       int r=m%10;
       m=m/10;
       ans=ans+pow(r,count);
    
   }
   if(ans==n)
   {
       cout<<"true"<<endl;
   }
   else
   {
       cout<<"false"<<endl;
   }
}
