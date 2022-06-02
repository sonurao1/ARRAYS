#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	//calculate roots
	int root1=(-b+sqrt(b*b-4*a*c))/2*a;
	int root2=(-b-sqrt(b*b-4*a*c))/2*a;
	if(root1<INT_MAX && root1>INT_MIN && root2<INT_MAX && root2>INT_MIN && root1!=root2)
    {
	   cout<<"Real and Distinct"<<endl;
	   if(root1<root2)
	   {
		   cout<<root1<<" "<<root2;
	   }
	   else
	   {
		   cout<<root2<<" "<<root1;
	   }
	}   
	else if(root1<INT_MAX && root1>INT_MIN && root2<INT_MAX && root2>INT_MIN && root1==root2)
	   {
		   cout<<"Real and Equal"<<endl;
		   cout<<root1<<" "<<root2;
	   }
	   else 
		{
			cout<<"Imaginary"<<endl;
		}
	   	
	


	return 0;
}
