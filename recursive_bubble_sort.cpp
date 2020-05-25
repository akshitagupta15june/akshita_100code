#include <iostream>
using namespace std;
void bubblesort_recursive(int *a,int j,int n)
{
    if(n==1)
    {
        return;
    }
    if(j==n-1)
    {
        return bubblesort_recursive(a,0,n-1);
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    bubblesort_recursive(a,j+1,n);
    return;
}
int main(int argc, char **argv)
{
	int arr[]={1,7,4,5,3,9};
    int n=sizeof(arr)/sizeof(int);
    bubblesort_recursive(arr,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
