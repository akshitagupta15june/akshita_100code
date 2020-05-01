#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,m,count=0,i;
    int a1[n],temp[1000001],ASum=0,BSum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cin>>m;
    int a2[m];
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    for(int i=n-1;i>=0;i--){
        ASum += a1[i]*pow(10,count++);
    }
    count=0;
    for(int i=m-1;i>=0;i--){
        BSum += a2[i]*pow(10,count++);
    }
    int FSum = ASum + BSum; 
    int j=0;
    while(FSum){
        temp[j++] = FSum % 10;
        FSum = FSum / 10;
    }
    for(int k=j-1;k>=0;k--){
        cout<<temp[k]<<", ";
    }
    cout<<"END";
}
