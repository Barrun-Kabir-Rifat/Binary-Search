#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;

  // array is sorted and infinite.
  // find an elemnt in an infinite array;

int binrysearch(vector<int>v,int left,int right,int key)
{
  int res=-1;
   while(left<=right)  
   {
    int mid=left+(right-left)/2;
    if(v[mid]==key)
    {
        return v[mid];
    }
    else if(v[mid]<key)
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
  vector<int>v(10);
  int x;
  int i=0;
 for(int i=0;i<10;i++)
 {
  cin>>v[i];
 }
  int key;
  cout<<"Enter key:";
  cin>>key;
  int left=0;
  int right=1;
  while(right<key)
  {
    left=right;
    right=2*right;
  }
  int res=binrysearch(v,left,right,key);
  cout<<res<<endl;
   return 0;
}