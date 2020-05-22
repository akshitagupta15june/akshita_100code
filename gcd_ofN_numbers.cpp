#include <iostream>
using namespace std;
int gcdval(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    return gcdval(b%a,a);
}
int gcdcalc(int *arr,int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        res=gcdval(arr[i],res);
        if(res==1)
        {
            return 1;
        }
    }
    return res;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    ans=gcdcalc(arr,n);
    cout<<ans;
	return 0;
}
