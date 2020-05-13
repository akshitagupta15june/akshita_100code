#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>c1,pair<int,int>c2)
{
    int d1=c1.first*c1.first+c1.second*c1.second;
    int d2=c2.first*c2.first+c2.second*c2.second;
   if(d1==d2)
   {
       return c1.first<c2.first;
   }
    return d1<d2;
}
int main(int argc, char **argv)
{
	int n;
    cin>>n;
    vector<pair<int ,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),compare);
    for(auto p:v)
    {
        cout<<"Car "<<p.first<<","<<p.second<<endl;
    }
	return 0;
}
