#include <iostream>
using namespace std;

int func(double arr[], int n)
{
  int x=0;
  double av, sum=0;
  for(int i = 0;i<n;i++)
    {
      sum+=arr[i];
    }
  av=sum/n;
   for(int i=0;i<n;i++)
     {
       if(arr[i]>av)
       {
         x++;
       }
     }
  return x;
}

int main() {
  int x=0;
  const int n=9;
  double arr[n];
  

  for(int i =0;i<n;i++)
    {
      cin >> arr[i];
    }
  
  x=func(arr,n);
    
  cout<<x<<endl;

  return 0;
}