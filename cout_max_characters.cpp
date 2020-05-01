#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void count(string str)
{ int max=0;
  char result;
  int count[26]={0};
  for(int i=0;i<str.size();i++)
  {
    
     count[str[i]]++;
    if (max < count[str[i]]) { 
            max = count[str[i]]; 
            result = str[i]; 
        } 
  }
  cout<<result<<endl;
}
int main() {
  string str;
  cin>>str;
  count(str);
	return 0;
}
