#include <iostream>
using namespace std;
void dectobin(int n)
{
    int ans=0;
    int p=1;
    while(n>0)
    {
        int last=(n&1);
        ans+=p*last;
        p=p*10;
        n=n>>1;
    }
    cout<<ans;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    dectobin(n);
	return 0;
}
