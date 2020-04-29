#include<iostream>
using namespace std;
int trail_zero(int num)
{
	int ans=0;
    int p=5;
    while((num/p)>0)
    {
        ans+=(num/p);
        p*=5;
    }
    return ans;
}
int main () {
	long long int num;
    cin>>num;
    cout<<trail_zero(num);
	return 0;
}
