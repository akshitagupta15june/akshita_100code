#include <iostream>
#include<cstring>
using namespace std;
void remove_dup(char str[])
{
    int m=strlen(str)-1;
    int i;
    int j=0;
    if(m==1 || m==0)
    {
        return;
    }
    for(i=1;i<=m;i++)
        {
            if(str[i]!=str[j])
                {
                    j++;
                    str[j]=str[i];
                }
        }
        str[j+1]='\0';
        
    cout<<str;
}

int main()
{
	char str[1000];
    cin.getline(str,1000);
    remove_dup(str);
	return 0;
}
