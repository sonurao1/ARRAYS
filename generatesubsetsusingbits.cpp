/#include<iostream>
using namespace std;
void generatesubset(int no,int*a)
{
    int bitpos=0;
    while(no>0)
    {
        if(no&1==1)
        {
            cout<<a[bitpos]<<" ";
        }
        bitpos++;
        no=no>>1;

    }
    cout<<endl;
}
void generateallsubsets(int*a,int n)
{
    for(int no=0;no<(1<<n);no++)
    {
        generatesubset(no,a);
    }
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
    generateallsubsets(a,n);
     
}
