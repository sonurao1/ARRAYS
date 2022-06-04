#include<bits/stdc++.h>
using namespace std;
/*
bool checkpalindrome(int*a,int n,int i)
{
	//base case
	if( i>n )
	{
		return true;
	}



	//recursive case
	bool ispalindrome=true;
	if(a[i]!=a[n-1])
	{
       ispalindrome=false;
	   return ispalindrome;
	}
	 ispalindrome=checkpalindrome(a,n-1,i+1);
	 return ispalindrome;
}
int main() {
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bool ans=checkpalindrome(a,n,0);
	if(ans)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
*/
//checking if the given no if palindrome without recursion
bool palindrome(int *a,int n,int start,int end)
{
    while(start<=end)
    {
        if(a[start]!=a[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
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
    int start=0;
    int end=n-1;
   bool ans= palindrome(a,n,start,end);
   if(ans)
   {
       cout<<"true"<<" ";
   }
   else
   {
       cout<<"false"<<" ";
   }
}
