//maximum circular sum
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int a[n];
     int b[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     int cs=0;
     int maxsum=INT_MIN;
     int csum=0;
     for(int i=0;i<n;i++)
     {
         csum=csum+a[i];
         cs=cs+a[i];
         if(cs>maxsum)
         {
             maxsum=cs;
         }
         if(cs<0)
         {
             cs=0;
         }
         b[i]=(-a[i]);
     }
     int res1=maxsum;
     cs=0;
     maxsum=INT_MIN;
     for(int i=0;i<n;i++)
     {
         cs=cs+b[i];
         if(cs>maxsum)
         {
             maxsum=cs;
         }
         if(cs<0)
         {
             cs=0;
         }
     }
     int res2=csum-(-maxsum);
     int ans=max(res1,res2);
     cout<<ans<<endl;
    
  }
} 

