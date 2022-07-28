#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    //cin.ignore();

    map<string, int> count;

    while (n--)
    {
        string country;
        cin >> country;
        cout<<"country is "<<country<<endl;

        string temp;
        getline(cin, temp);
        cout<<"temp is "<<temp<<endl;

        count[country] += 1;
    }

    for (map<string, int>::const_iterator iter = count.begin(); iter != count.end(); ++iter)
        cout << iter->first << " " << iter->second << '\n';


}
