//wave print coloumn wise
#include<iostream>
using namespace std;
 int main()
 {
     int n,m;
     cin>>n>>m;
     int **arr=new int*[n];
     for(int i=0;i<n;i++)
     {
         arr[i]=new int[m];
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>>arr[i][j];
         }
     }
     //print coloumn wise
     for(int j=0;j<m;j++)
     {
         if(j%2==0)
         {
             //top to bottom
             for(int i=0;i<n;i++)
             {
                 cout<<arr[i][j]<<", ";
             }

         }
         else
         {
             for(int i=n-1;i>=0;i--)
             {
                 cout<<arr[i][j]<<", ";
             }
         }
     }
     cout<<"END";


 }
