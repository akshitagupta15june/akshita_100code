#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool palin(int arr[],int i,int j){
   if(i==j)
   return true;
   if(arr[i]!=arr[j])
   return false;
   if(i<j-1)
    {
         return palin(arr,i+1,j-1);
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int i=0;
    int j=n-1;
    bool check=palin(arr,i,j);
    if(check)
    cout<<"true";
    else 
    cout<<"false";
	return 0;
}
}
