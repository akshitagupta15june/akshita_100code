#include <iostream>
#include<cstring>
using namespace std;
bool palindrome(char str[])
{
    int i=0;
    int j=strlen(str)-1;
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

int main(int argc, char **argv)
{
    
	char str[1000];
    cin.getline(str,1000);
   
    bool found=palindrome(str);
    if(found==true)
    {
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }
	return 0;
}
