#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int key;
    int arr[]={1,3,3,3,3,5,7,9,12};
    int n=sizeof(arr)/sizeof(int);
    cin>>key;
    bool present=binary_search(arr,arr+n,key);
    if(present)
    {
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
    auto lb=lower_bound(arr,arr+n,key);
    cout<<endl<<"lower bound"<<(lb-arr)<<endl;
    auto ub=upper_bound(arr,arr+n,key);
    cout<<endl<<"lower bound"<<(ub-arr)<<endl;
    cout<<"occurences"<<(ub-lb);
    
	return 0;
}
