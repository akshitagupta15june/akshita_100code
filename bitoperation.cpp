#include <iostream>
using namespace std;
bool isodd(int n)
{
    return(n&1);
}
int getbit(int n,int i)
{
    int mask=(1<<i);
    int bit=(n&mask)>0?1:0;
    return bit;
}
int setbit(int n,int i)
{
    int mask=(1<<i);
    int bit=(n | mask);
    return bit;
}
void clearbit(int &n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
}
void updatebit(int &n,int i,int v)
{
    int mask=~(1<<i);
    int clearn=n&mask;
    n=clearn|(v<<i);
}
int main(int argc, char **argv)
{
	int n=5;
    int i=3;
    int l=4;
    cout<<isodd(n)<<endl;
    cout<<getbit(n,i)<<endl;
    cout<<setbit(n,i)<<endl;
    clearbit(n,i);
    cout<<n;
    updatebit(n,i,l);
    cout<<n;
	return 0;
}
