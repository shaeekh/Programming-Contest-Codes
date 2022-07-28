#include <iostream>
#include <string>
#include <map>

using namespace std;
void solve();

int main()
{
    solve();
    return 0;
}

void solve ()
{
    string s;
    cin >> s;

    size_t length = s.length();

    map< char, bool > is_repeated;
    map< char, int > rep_counts;

    for (size_t k = 0; k < length; ++k)
    {
        if (is_repeated[s[k]])
        {
            rep_counts[s[k]]++;
            continue;
        }

        is_repeated[s[k]] = 1;
    }

    char maxC = s[0];
    int mostCount = -1;

    for (map<char, int>::iterator it = rep_counts.begin(); it != rep_counts.end(); ++it)
    {
        if ((*it).second > mostCount)
        {
            mostCount = (*it).second;
            maxC = (*it).first;
        }
    }

    cout << maxC;
}
