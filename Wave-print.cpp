#include<iostream>
using namespace std;
int main() {
	long long int m,n;
	cin>>m>>n;
	long long int arr[m][n];
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<n;j++)
	{
	cin>>arr[i][j];
	}
	}
	for(int col=0;col<n;col++)
	{

	if(col%2==0)
	{
	for(int row=0;row<m;row++)
	{
	cout<<arr[row][col]<<", ";
	}
	}
	else
	{
	for(int row=m-1;row>=0;row--)
	{
	cout<<arr[row][col]<<", ";
	}
	}

	}
	cout<<"END";
	return 0;
}
