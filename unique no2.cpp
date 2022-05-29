//unique no 2
#include<bits/stdc++.h>
using namespace std;
int set1(int value)
{
    return log(value & (-value));
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //step1 xor all elements
    int res=0;
    for(int i=0;i<n;i++)
    {
      res=res^a[i];
    }
    //step2 find pos of set bit in res
    int value=set1(res);
    //step3 create mask
    int mask=1<<value;
    //step4 stores the 1st non repeating no
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]&mask==1)
        {
            ans=ans^a[i];
        }
    }
    int ans1=ans^res;
    if(ans<ans1)
    {
        cout<<ans<<" "<<ans1<<endl;

    }
    else{
        cout<<ans1<<" "<<ans<<endl;
    }
    return 0;
}
