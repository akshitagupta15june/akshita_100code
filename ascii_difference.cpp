#include <iostream>
using namespace std;
int main() 
{
   string str;
cin>>str;

for(int i=0;i<str.length()-1;i++)
{
    cout<<str[i]<<str[i+1]-str[i];  
}
cout<<str[str.length()-1];
return 0;
}
