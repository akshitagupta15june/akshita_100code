#include <iostream>
using namespace std;
int storoccur(int *a,int i,int n,int key,int *out,int j)
{
    if(i==n)
    {
        return j;
    }
    if(a[i]==key)
    {
        out[j]=i;
        return storoccur(a,i+1,n,key,out,j+1);
    }
    return storoccur(a,i+1,n,key,out,j);
    
}
void all_occur(int *a,int i,int n,int key)
{
    if(i==n)
    {
        return;
    }
    if(a[i]==key)
    {
        cout<<i<<",";
    }
    all_occur(a,i+1,n,key);
}

int main(int argc, char **argv)
{
	int arr[]={1,2,3,7,4,5,6,7,10};
    int key=7;
    int n=sizeof(arr)/sizeof(int);
    int output[100];
    int cnt=storoccur(arr,0,n,key,output,0);
    all_occur(arr,0,n,key);
    cout<<endl;
    cout<<cnt<<endl;
    for(int k=0;k<cnt;k++)
    {
        cout<<output[k]<<" ";
    }
   // cout<<linearsearch(arr,0,n,key);
	return 0;
}

