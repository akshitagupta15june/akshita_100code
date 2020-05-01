#include <iostream>
#include<string>
#include <cctype>
using namespace std;

int main()
{
	string s;
    cin>>s;
    int n=s.length();
    for(int i=0; i<n; i++)
    {
        if(i!=0&&s[i]>='A'&&s[i]<='Z')
        {
            cout<<endl;
        }
       {
        cout<<s[i];
       }
    }
	return 0;
}
