#include <iostream>
#include<vector>
using namespace std;
int main(int argc, char **argv)
{
	vector<int> d{1,2,3,10,14};
    d.push_back(16);
    d.pop_back();
    //insert in middle
    d.insert(d.begin()+3,4,100);
    d.erase(d.begin()+2);
    d.erase(d.begin()+2,d.begin()+5);
    d.resize(18);
    d.clear();
    d.reserve(100);
    if(d.empty())
    {
        cout<<"vector is empty";
    }
    for(int x:d)
    {
        cout<<x<<",";
    }
	return 0;
}
