#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    long int T,i=0;
    cin >> T;
    while(i<T)
    {
        int l;
        string s;
        cin >> l >> s;
        int vac=l-s.size();
        double total=pow(26,vac);
        cout << total <<"\n";
        i++;
    }
}
