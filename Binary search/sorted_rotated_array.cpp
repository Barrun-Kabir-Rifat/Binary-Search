#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  // number of rotation 
int binarysearch(vector<int>arr)
{
  int left=0,right=arr.size()-1;
  int ans=0;
  while(left<=right)
  {
   int mid=left+(right-left)/2;
    if(arr[mid]<arr[mid-1]&&arr[mid]<=arr[mid+1])
    {
       return mid;
    }
    else if(arr[mid]<arr[right])
    {
      right=mid-1;
    }
    else
    {
        left=mid+1;
    }

  }
  return ans;
}
  
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    v.pb(x);
  }
  int number_of_rotation=binarysearch(v);
  cout<<number_of_rotation<<endl;
   return 0;
}