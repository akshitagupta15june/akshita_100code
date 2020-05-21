#include <iostream>
using namespace std;
int binary_search(int *a,int l,int u,int key)
{
    if(l<=u)
    {
       int mid=(l+u)/2;
    if(a[mid]==key)
    {
        return mid;
    }
    if(a[mid]>key)
    {
       binary_search(a,0,mid-1,key);
    } 
    if(a[mid]<key)
    {
       binary_search(a,mid+1,u,key);
    } 
    }
    return -1;
    
}
int main(int argc, char **argv)
{
	int arr[]={1,3,6,8,9};
    int n=sizeof(arr)/sizeof(int);
    int item;
    cin>>item;
    cout<<binary_search(arr,0,n-1,item)<<endl;
	return 0;
}
