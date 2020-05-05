#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int key;
    int arr[]={2,6,1,9,4,7};
    int n=sizeof(arr)/sizeof(int);
    cin>>key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
    if(index==n)
    {
        cout<<"Not found";
    }
    else{
        cout<<index;
    }
    
	return 0;
}
