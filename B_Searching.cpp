#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    const int SIZE = 1e5;
    ll n, m;
    cin >> n;
    int arr[SIZE];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            cout << i <<endl;
            return 0;
        }
        
       
    }
     cout << -1 << endl;
}
