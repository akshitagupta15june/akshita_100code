#include <bits/stdc++.h> 
using namespace std; 
int evenpalin(string str)
{
     int n = str.length(); 
    int result = 0; 
    int sameChar[n] = { 0 }; 
     int i = 0; 
    while (i < n) { 
        int sameCharCount = 1; 
        int j = i + 1;
        while (str[i] == str[j] && j < n) 
            sameCharCount++, j++;
        result += (sameCharCount * (sameCharCount + 1) / 2); 
        sameChar[i] = sameCharCount; 
        i = j; 
    } 
  return result - n; 
}

int oddlen(string str)
{
    int n = str.length(); 
    int result = 0; 
    int sameChar[n] = { 0 }; 
    //int i = 0; 
    for (int j = 1; j < n; j++) 
    { 
        
        if (str[j] == str[j - 1]) 
            sameChar[j] = sameChar[j - 1]; 
  
       
        if (j > 0 && j < (n - 1) && 
            (str[j - 1] == str[j + 1] && 
             str[j] != str[j - 1])) 
            result += min(sameChar[j - 1], 
                          sameChar[j + 1]); 
    } 
  
     
    return n-result; 
}

int main()
{
	string s;
    cin>>s;
    cout<<evenpalin(s)<<" "<<oddlen(s);
    //evenpalin(s);
	return 0;
}
