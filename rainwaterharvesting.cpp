#include <iostream>
#include<algorithm>
using namespace std;
int maximumleft(int a[],int c)
{
    int max=0;
    for(int i=0;i<=c;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    return max;
}
int maximumright(int a[],int c,int n)
{
    int max=0;
    for(int i=c;i<=n-1;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{
	int n;
     //int k=0;
    int sum=0;
    cin>>n;
    int a[n];
    int left[n];
    int right[n];
    int water[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        left[i]=maximumleft(a,i);
    }
    for(int j=n-1;j>=0;j--)
    {
       right[j]=maximumright(a,j,n);
    }
    for(int k=0;k<n;k++)
    {
        water[k]=min(left[k],right[k])-a[k];
    }
    for(int i=0;i<n;i++)
    {
        sum+=water[i];
    }
    cout<<sum<<endl;
	return 0;
}
