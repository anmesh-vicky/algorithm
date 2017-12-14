#include<iostream>
using namespace std;
void count(int a[],int b[],int n)// counting 
{
	for(int i=0;i<n;i++)
	{
		b[a[i]]++;
	}
}


// find max value of the element
int max(int a[],int n)
{
	int max=0;
	for(int i=0;i<n;i++)
		if(max<=a[i])
			max=a[i];


	return max;
}

void add(int b[],int max)
{
	for(int i=1;i<max+1;i++)
		b[i]=b[i]+b[i-1];
}



void sort(int a[],int b[],int c[],int n,int max)
{
	
	count(a,b,n);
	add(b,max);
	for(int i=0;i<n;i++)
	{
		c[b[a[i]]-1]=a[i];
			b[a[i]]--;

	}



}
int main()
{

	int a[100],b[100],c[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	int max1=max(a,n);
	for(int i=0;i<max1+1;i++)
		b[i]=0;


	sort(a,b,c,n,max1);
	for(int i=0;i<n;i++)
	{
		cout<<c[i]<<" ";
	}


}



