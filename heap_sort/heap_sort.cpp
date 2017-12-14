#include<iostream>
using namespace std;

void swap(int a[],int x,int y)
{
	int temp=0;
	 temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}


void heapify(int a[], int n,int i)
{
	int largest =i;
	int l=2*i;
	int r=2*i+1;
	if(l<n&&a[l]>a[largest])
		largest=l;
	if(r<n&&a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{	swap(a,largest,i);
		heapify(a, n, largest);
	}
}
void heapsort(int a[],int n)
{     //sorting from n/2 -1 to top 0
	for(int i=n/2-1;i>=0;i--)
		heapify(a,n,i);
	for(int i=n-1;i>=0;i--)
		{// Move current root to end
        swap(a[0], a[i]);
 
        // call max heapify on the reduced heap
        heapify(a, i, 0);
    }
}
void print(int a[] ,int n)
{for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}



int main()
{

	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	heapsort(a,n);
	print(a,n);
}





