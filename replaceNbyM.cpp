#include <iostream>
using namespace std;
int clearrange(int n,int i,int j)
{
    int ones=(~0);
    int a=ones<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    int ans=n&mask;
    return ans;
}
int replacebits(int n,int m,int i,int j)
{
    int no=clearrange(n,i,j);
    int ans=no|(m<<i);
    return ans;
}
int main()
{
    int n=15;
    int i=1,j=3;
    int m=2;
    cout<<replacebits(n,m,i,j);
    return 0;
}
