#include <bits/stdc++.h>
using namespace std;


int main()
{
    string line;
    bool openQuote = true;
    
    while (getline(cin, line))
    {
        for (auto it = line.begin(); it != line.end(); ++it)
        {
            if (*it == '"')
            {
                if (openQuote)
                    cout << "``";
                else
                    cout << "''";
                
                openQuote = !openQuote;            
            }
            else
                cout << *it;
        }
        cout << '\n';
    }
    return 0;
}