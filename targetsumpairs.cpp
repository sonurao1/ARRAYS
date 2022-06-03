#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   int target;
   cin>>target;
   //2 pointer algo
   int start=0;
   int end=n-1;
   while(start<end)
   {
       if(a[start]+a[end]==target)
       {
           cout<<a[start]<<" and "<<a[end]<<endl;
           start++;
           end--;
       }
       else if(a[start]+a[end]<target)
       {
           start++;
       }
     else 
       {
           end--;
       }
   }
   return 0;



     
}
