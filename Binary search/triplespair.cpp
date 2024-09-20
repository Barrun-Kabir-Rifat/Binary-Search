#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long int ll;
typedef unsigned long long int ull;

void solve()
{
}

int main()
{
    fast();

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        map<ll, ll> mp;
        int count = 1;
        int res = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && mp[arr[i]] == 0)
            {
                mp[arr[i]] = arr[i + 2];
            }
            else if (arr[i] == arr[i + 1] && mp[arr[i]] != 0)
            {
                res++;
            }
            else if (arr[i] == arr[i + 2] && mp[arr[i]] == 0)
            {
                mp[arr[i]] = arr[i + 1];
            }
            else if (arr[i] == arr[i + 2] && mp[arr[i]] !=0)
            {
                res++;
            }
            else if (arr[i + 1] == arr[i + 2] && mp[arr[i + 1]] == 0)
            {
                mp[arr[i + 1]] = arr[i];
            }
            else if (arr[i + 1] == arr[i + 2] && mp[arr[i + 1]] != 0)
            {
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}