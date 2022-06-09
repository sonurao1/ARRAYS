//find the missing no
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   int a[]={1,2,3,4,5};
   int b[]={1,2,3,4};
   int n=sizeof(a)/sizeof(int);
   int ans=0;
   for(int i=0;i<n;i++)
   {
       ans=ans^a[i];
   }
   int m=sizeof(b)/sizeof(int);
   for(int i=0;i<m;i++)
   {
       ans=ans^b[i];
   }
   cout<<ans<<endl;
}
