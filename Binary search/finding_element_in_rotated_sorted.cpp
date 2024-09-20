#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
/*firstly We need to find out min element index.then by dividing the the vector in two part
we can get two sorted array.by searching two sorted array,we will get a valid ans and a unvalid ans
.*/
/*Here we are finding an element in a rotated sorted array*/
 int firsthalfsearch(vector<int>v,int left,int right,int num) 
 {
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==num)
        {
            return mid;
        }
        else if(v[mid]<num)
        {
         left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
 }
 int lasthalfsearch(vector<int>v,int left,int right,int num) 
 {
    int ans=-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(v[mid]==num)
        {
            return mid;
        }
        else if(v[mid]<num)
        {
         left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return ans;
 }
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
  int num;
  cout<<"Enter num to search:";
  cin>>num;
  int min_index=binarysearch(v);
  int f=firsthalfsearch(v,0,min_index-1,num);
  int l=lasthalfsearch(v,min_index,v.size()-1,num);
  int result_index=max(f,l);
cout<<"The element is found at "<<result_index<<endl;
   return 0;
}