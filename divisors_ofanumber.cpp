#include <iostream>
#include<vector>
using namespace std;
vector<int>primesieve(int *p,int n)
{
    p[0]=p[1]=0;
    p[2]=1;
    for (int i = 3; i <= n; i += 2) {
		p[i] = 1;
	}

	// Sieve
	for (int i = 3; i <= n; i += 2) {
		//if the current number is not marked (it is prime)
		if (p[i] == 1) {
			//mark all the multiples of i as not prime
			for (int j = i * i; j <= n; j+=2*i ) {
				p[j] = 0;
			}
		}

	}
    vector<int>primes;
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
		if(p[i] == 1)
        {
            primes.push_back(i);
        }
	}
    return primes;
}
int divisors(int n,vector<int> &primes)
{
    int i=0;
    int p=primes[0];
    int ans=1;
    while(p*p<=n)
    {
        if(n%p==0)
        {
            int cnt=0;
            while(n%p==0)
            {
                cnt++;
                n=n/p;
            }
            ans=(cnt+1)*ans;
        }
        i++;
        p=primes[i];
    }
    if(n!=1)
    {
        ans=ans*2;
    }
    return ans;
}
int main(int argc, char **argv)
{
	int N=1000000;
    int p[N]={0};
    vector<int>primes=primesieve(p,100);
    int t;
    cin>>t;
    while(t--)
    {
        int no;
        cin>>no;
        int divs=divisors(no,primes);
        cout<<divs<<endl;
    }
	return 0;
}
