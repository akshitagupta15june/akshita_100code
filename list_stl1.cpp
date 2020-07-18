#include<iostream>
using namespace std;
#include<list>

int main(int argc, char **argv)
{
	list<int>l;
    list<string>l2{"apple","banana","pineapple","grapes"};
    l2.push_back("orange");
    cout<<l2.front()<<endl;
    l2.pop_front();
    l2.sort();
    for(auto it=l2.begin();it!=l2.end();it++)
    {
        cout<<(*it)<<"-->";
    }
    cout<<endl;
    l2.push_front("kiwi");
    for(string s:l2){
        cout<<s<<"-->";
    }
    auto it=l2.begin();
    it++;
    l2.insert(it,"fruitjuice");
    cout<<endl;
      for(string s:l2){
        cout<<s<<"-->";
    }
}
