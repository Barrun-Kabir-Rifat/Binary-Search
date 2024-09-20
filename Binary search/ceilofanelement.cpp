#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
#define md left+(right-left)/2
typedef long long int ll;
typedef unsigned long long int ull;
// if the element is available in the vector,the the element itself is ceil
 // minimum greatest value of the key is ceil;
 // the next value of the key; 
int ceilsearch(vector<int>v,int key)
{
  int left=0;
  int res=-1;
  int right=v.size()-1;
  while(left<=right)
  {
    int mid=md;
    if(v[mid]==key)
    {
        return v[mid];
    }
   else if(v[mid]>key)
    {
      res=v[mid];
      right=mid-1;
    }
    else
    {
        left=mid+1;
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
  int res=ceilsearch(v,key);
  cout<<res<<endl;
   return 0;
}