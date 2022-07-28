#include <iostream>
using namespace std;

int main()
{
    int i;
    cin>> i;

    if(!cin.eof())
    {
        cout<< "\n Format Error \n";
    }
    else
    {
        cout<< "\n Correct Input \n";
    }

//    getchar();
    return 0;
}
