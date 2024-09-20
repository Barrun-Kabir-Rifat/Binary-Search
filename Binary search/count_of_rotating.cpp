#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

int binarysearch(vector<int> v)
{
    int n = v.size();
    int start = 0;
    int end = n - 1;
    int min = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int next = (mid + 1) % n;
        int previous = (mid + n - 1) % n;
        if (v[mid] <= v[previous] && v[mid] <= v[next])
        {
            return mid;
        }
        else if (v[mid] > v[end])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return min;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }

    int number_of_rotation = binarysearch(v);
    cout << number_of_rotation << endl;
    return 0;
}