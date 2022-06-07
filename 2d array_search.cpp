//2 d arrays search
#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int mat[10][10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

int t;
cin>>t;
bool flag=false;
 for(int i=0;i<m;i++)
 {
     for(int j=0;j<n;j++)
     {
         if(mat[i][j]==t)
         {
             cout<<"t is found at ("<<i<<","<<j<<")"<<endl;
             flag=true; // t is found
             break;
         }
     }
     //if(j<n)
     //{
         //i have found t at some index and i breaked from inner loop
         //break;
     //}
     if(flag)
     {
         // t is found
       break;
     }
 }
 //if(i==m)
 //{
    //i did not  found t in mat
    //cout<<t<<"is not present in matrix"<<endl;

 //}
 if(flag==false)
 {
      cout<<"t"<<"is not present in matrix"<<endl;
 }
 return 0;
} 
