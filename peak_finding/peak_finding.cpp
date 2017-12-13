#include<iostream>

using namespace std;
int binary(int a[][100],int l,int u,int mid_col)
{int mid=(l+u)/2;
	if (a[mid][mid_col]>a[mid-1][mid_col]&&a[mid][mid_col]>a[mid+1][mid_col])
		return mid;
	else if(a[mid][mid_col]<a[mid-1][mid_col])
	{
		l=0,u=mid-1;
		binary(a,l,u,mid_col);

	}

	else 
	{	l=mid+1;
		binary(a,l,u,mid_col);

	}
}




int travel(int a[][100],int n,int m,int mid_col)
{ 

	if(a[binary(a,0,n-1,mid_col)][mid_col]>a[binary(a,0,n-1,mid_col)][mid_col-1]&&a[binary(a,0,n-1,mid_col)][mid_col]>a[binary(a,0,n-1,mid_col)][mid_col+1])
		return a[binary(a,0,n-1,mid_col)][mid_col];
	else if(a[binary(a,0,n-1,mid_col)][mid_col]<a[binary(a,0,n-1,mid_col)][mid_col]+1)
	{
		return travel(a,n,m,mid_col+1);
	}
	else
		return travel(a,n,m,mid_col-1);

}


int main()
{
	int a[100][100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}



	cout<<'\n'<<travel(a,n,m,m/2);
return 0;
}