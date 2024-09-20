#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;

int lastoccurence(vector<int> v, int key)
{
    int left=0,right=v.size()-1;
    int res=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(key==v[mid])
        {
         res=mid;
         left=mid+1;
         right=v.size()-1;
        }
        else if(key>v[mid])
        {
           left=mid+1; 
        }
        else
        {
            right=mid-1;
        }
    }
    return res;
}

int firstoccurence(vector<int> v, int key)
{
    int left=0,right=v.size()-1;
    int res=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(key==v[mid])
        {
         res=mid;
         left=0;
         right=mid-1;
        }
        else if(key>v[mid])
        {
           left=mid+1; 
        }
        else
        {
            right=mid-1;
        }
    }
    return res;
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
    int key;
    cout << "Enter key:";
    cin >> key;
    int count = lastoccurence(v, key) - firstoccurence(v, key);
    cout<<lastoccurence(v, key)<<endl;
    cout<<firstoccurence(v, key)<<endl;
    cout<<count+1<<endl;
    return 0;
}