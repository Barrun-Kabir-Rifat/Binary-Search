#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  /*if the element is available in the array,then element itself is
  the floor element,else the greater minimum elment of the number
  is the floor element*/
int binarysearch(vector<int>v,int num)
{
  int n=v.size()-1;
  int left=0,right=n-1;
  int res=-1;
  while(left<=right)
  {
    int mid=left+(right-left)/2;
    if(v[mid]==num)
    {
        return v[mid];
    }
   else if(v[mid]<num)
    {
      res=v[mid];
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
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int key;
  cout<<"enter key:";
  cin>>key;
  int ans=binarysearch(v,key);
  cout<<ans<<endl;
   return 0;
            
}