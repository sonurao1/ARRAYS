//generate subsets using bitmasking
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void generatesubsets(int no,int *a)
{
    int bitpos=0;
    while(no>0)
    {
        int lastbit=(no&1);
        if(lastbit==1)
        {
            //include it in the subset
            cout<<a[bitpos]<<" ";
        }
        bitpos++;
        no=no>>1;
    }
    cout<<endl;

}
//generate 2^n nos starting from 0 to 2^n-1;
void generateallsubsets(int *a,int n)
{
   for(int no=0;no<(1<<n);no++)
   {
      generatesubsets(no,a);
   }
   cout<<endl;
}

