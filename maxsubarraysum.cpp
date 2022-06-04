#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //approach 1
    //max sum subarray 3 loops o(n^3)
    /*
    int max_sum=INT_MIN;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //i will consider the subarray starting from i and ending at j
            int subarray_sum=0;
            for(int k=i;k<=j;k++)
            {
                subarray_sum=subarray_sum+a[k];
            }
            if(subarray_sum>max_sum)
            {
                max_sum=subarray_sum;
                start=i;
                end=j;
            }
        } 
    }
    
    //approach 2
    //cumulative sum
    /*
    int csum[n];
    csum[0]=a[0];
    int max_sum=INT_MIN;
   
    for(int i=1;i<n;i++)
    {
        csum[i]=csum[i-1]+a[i]; 
    }
     int start=0;
    int end=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int subarray_sum=csum[j]-csum[i-1];
            if(subarray_sum>max_sum)
            {
                max_sum=subarray_sum;
                start=i;
                end=j;
            }
        }
    }
    */
    //approach 3
    //kadanes algorithm
    int max_sum=INT_MIN;
    int temp=0;
    int currsum=0;
    int start=0;
    int end=0;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum>max_sum)
        {
            max_sum=currsum;
            start=temp;
            end=i;
        }
        if(currsum<0)
        {
            currsum=0;
            temp=i+1;
        }
    }

    cout<<"maximum subarray sum is"<<max_sum<<endl;
    for(int i=start;i<=end;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
