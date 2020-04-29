#include <iostream>
#include<algorithm>
using namespace std;
int kadane(int a[],int t)
{
    int mx=0;
    int csum=0;
    for(int j=0;j<t;j++)
    {
        csum=csum+a[j];
        if(csum<0)
        {
            csum=0;
        }
        mx=max(csum,mx);
    }
    return mx;
}
int main()
{
    int kad_sum=0;
	int n,t;
    int wrap=0;
	int a[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
		}
        kad_sum=kadane(a,t);
    for(int i=0;i<t;i++)
    {
        wrap+=a[i];
        a[i]=-a[i];
    }
    wrap+=kadane(a,t);
    int y = (wrap > kad_sum)? wrap: kad_sum;
    cout<<y<<endl;
    }
	return 0;
}
