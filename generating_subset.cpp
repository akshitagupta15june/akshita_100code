#include <iostream>
#include<cstring>
#include<string>
using namespace std;
void filterchar(int n, char a[])
{
    int j=0;
    while(n>0)
    {
        int last=(n&1);
        if(last==1)
        {
            cout<<a[j];
        }
            j++;
            n=n>>1;
    }
    cout<<endl;
}
void printsubset(char a[])
{
    int n=strlen(a);
    for(int i=0;i<(1<<n);i++)
    {
        filterchar(i,a);
    }
}
int main(int argc, char **argv)
{
	char a[100];
    cin>>a;
    printsubset(a);
	return 0;
}
