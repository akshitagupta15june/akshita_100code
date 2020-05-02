#include <iostream>
#include<cstring>
using namespace std;
bool ispalin(string str[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
       if(str[i]==str[j])
       {
           i++;
           j--;
       }
       else{
           return false;
       }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
	cin.get();
    string str[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
  
    bool found=ispalin(str,n);
    if(found==true)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
	return 0;
}
