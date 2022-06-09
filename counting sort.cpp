//counting sort algorithm
#include<iostream>
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
    int maxval=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxval)
        {
            maxval=a[i];
        }
    }
    int freq[maxval+1]={0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int index=0;
    for(int i=0;i<maxval+1;i++)
    {
        while(freq[i]>0)
        {
            a[index]=i;
            index++;
            freq[i]--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}    
