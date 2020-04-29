#include<iostream>
using namespace std;
int main() {
	int rev=0;
	int d=0;
	long long num;
	cin>>num;
	while(num>0)
	{
		d=num%10;
		rev=(rev*10)+d;
		num=num/10;
	}
	cout<<rev;
	return 0;
}
