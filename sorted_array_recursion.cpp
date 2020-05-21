#include <iostream>
using namespace std;
bool isSorted(int *a,int n)
{
    if(n==0 or n==1)
    {
        return true;
    }
    if((a[0]<a[1]) and isSorted(a+1,n-1))
    {
        return true;
    }
    return false;
}
int main(int argc, char **argv)
{
	int arr[]={1,2,4,6,8};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n)<<endl;
	return 0;
}
