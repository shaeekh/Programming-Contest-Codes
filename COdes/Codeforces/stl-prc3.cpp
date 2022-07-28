#include <string>
#include<list>
#include<iterator>
#include<iostream>
using namespace std;
int main()
{
    int ar[5]={4,6,3,5,4};
    list<int>mylist(ar,ar+5);
    list<int>::iterator it;
  //  for (it=mylist.begin();it!=my)
  it=mylist.begin();
  it++;
  cout<<*it<<endl;
  mylist.insert(it,7);
  cout<<*it<<endl;
}
