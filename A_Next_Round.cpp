#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    
const ll SIZE = 50;
ll n , k;

cin >> n >> k;
ll arr[SIZE];
for(ll i=0; i<n ;i++)
    cin >> arr[i];

ll count = 0;

for(ll i =0;i<n;i++)
{
if (arr[i] >= arr[k-1] && arr[i]>0)
count++;
}

cout << count << endl;
 
 return 0;

}
