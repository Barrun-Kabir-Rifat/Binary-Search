/*5 10 30 20 40*/
//nearly sorted array; 5 10 30 20 40
//5 10 20 30 40>sorted array
/*Given a sorted array arr[] of size N, 
some elements of array are moved to either of the adjacent positions, 
i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. 
arr[i] can only be swapped
 with either arr[i+1] or arr[i-1]. The task is to search 
 for an element in this array.*/
 // here sorted elements are swaped with adjacent element.
#include<bits/stdc++.h>
using namespace std;
#define pb  push_back
typedef long long int ll;
typedef unsigned long long int ull;
  
int almost_sorted(int arr[],int num,int size)
{
  int left=0;
  int right=size-1;
  while(left<=right)
  {
    int mid = left + (right-left)/2;
    if(arr[mid]==num)
    {
        return mid;
    }
    else if(mid-1>=left&&arr[mid-1]==num)
    {
        return mid-1;
    }
    else if(mid+1<=right&&arr[mid+1]==num)
    {
        return mid+1;
    }
    else if(arr[mid]<num)
    {
        left=mid+2;
    }
    else
    {
        right=mid-2;
    }
  }
}
  
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int num;
  cout<<"Enter key to search:";
  cin>>num;
  int index=almost_sorted(arr,num,n);
  cout<<index;
   return 0;
}