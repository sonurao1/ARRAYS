//rotate 2d array 90 degree anticlockwise
#include<iostream>
using namespace std;
void reverse(int *mat,int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(mat[i],mat[n-1-i]);
    }
}
void rotate(int **mat,int n)
{
    //step1 reverse each row
    for(int i=0;i<n;i++)
    {
        reverse(mat[i],n);
    }
    // take transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int **mat=new int*[n];
    for(int i=0;i<n;i++)
    {
        mat[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    rotate(mat,n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
