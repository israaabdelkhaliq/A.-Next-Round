#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string S;
     

    getline(cin, S);

    for (int i = 0; i<S.size(); i++)
    {
        if (S[i] == '\\')
        {
            break;
        }
    cout<<S[i];
    }

    
    return 0;
}