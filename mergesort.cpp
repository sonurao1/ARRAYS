//merge sort o(nlogn)
#include <iostream>
using namespace std;
void merge2sortedarray(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s;
    int temp[1000];
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=a[j];
            k++;
            j++;
        }


    }
    while(i<=mid){
        temp[k]=a[i];
        k++;
        i++;
    }
    while(j<=e)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    for(int i=s;i<=e;i++)
    {
        a[i]=temp[i];
    }
}
void mergesort(int *a,int s,int e)
{//base case
   if(s>=e)
   {
       return;
   }
   int mid=(s+e)/2;
   mergesort(a,s,mid);
   mergesort(a,mid+1,e);
   merge2sortedarray(a,s,e);
  

}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
