#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <string>
int main()
{
    string s = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        bool flag = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == c)
                flag = 1;
        if (flag == 0)
            cout<< "NO\n";
        else
            cout<< "YES\n";
    }
}