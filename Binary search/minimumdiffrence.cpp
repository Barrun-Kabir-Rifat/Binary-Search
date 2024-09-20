#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
int binarysearch(vector<int>v,int key)
{
    int left=0;
    int right=v.size()-1;
  while(left<=right)
  {
      int mid=left+(right-left)/2;
      if(v[mid]==key)
      {
        return (v[mid]-key);
      }
      else if(v[mid]>key)
      {
        right=mid-1;
      }
      else
      {
        left=mid+1;
      }
  }
  int dif1=abs(key-v[right]);
  int dif2=abs(key-v[left]);
  int ans=min(dif1,dif2);
  return ans;
}
  
int main()
{
  int n;
  cin>>n;
  vector<int >v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  int key;
  cout<<"enter key:";
  cin>>key;
  sort(v.begin(),v.end());
  int res=binarysearch(v,key);
  cout<<res<<endl;
   return 0;
}