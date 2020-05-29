#include <iostream>
using namespace std;
int tiling(int n)
{
    if(n<=3)
    {
        return 1;
    }
    else{
        return tiling(n-1)+tiling(n-4);
    }
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    cout<<tiling(n);
	return 0;
}
