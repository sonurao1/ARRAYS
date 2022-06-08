// staircase search in a 2d array (n+m) steps
#include <iostream>
using namespace std;
bool search(int **arr,int n,int m,int key)
{
    int i=0;
    int j=m-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==key)
        {
            return true;
        }
        else if(arr[i][j]>key)
        {
           j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main() {
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
   int key;
   cin>>key;
   search(arr,n,m,key)?cout<<"key us founf!"<<endl:cout<<"key is not found!"<<endl;
   return 0;
}

