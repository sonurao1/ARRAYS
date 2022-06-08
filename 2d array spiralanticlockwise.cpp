//spiral print anticlockwise
#include<iostream>
using namespace std;
int main() {
	int r,c;
	cin>>r>>c;
	int mat[100][100];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
		}
	}
	int sr=0;
	int sc=0;
	int er=r-1;
	int ec=c-1;
	while(sr<=er && sc<=ec)
	{
        //print sc from sr to er
        for(int row=sr;row<=er;row++)
        {
            cout<<mat[row][sc]<<", ";
        }
        sc++;
        //print er from sc to ec
        for(int col=sc;col<=ec;col++)
        {
            cout<<mat[er][col]<<", ";
        }
        er--;
        //print ec from er to sr
        for(int row=er;row>=sr;row--)
        {
            cout<<mat[row][ec]<<", ";
        }
        ec--;
        //print sr from ec to sc
        for(int col=ec;col>=sc;col--)
        {
            cout<<mat[sr][col]<<", ";
        }
        sr++;

    }	
    cout<<"END";	
return 0;
}


		
