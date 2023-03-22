#include <iostream>
using namespace std;

void func(double arr[],int n)
{
  int maxInd=0;
  int minInd=0;
  for(int i=0;i<n;i++)
    {
      if(arr[i]>arr[maxInd])
      {
        maxInd=i;
      }
      else if (arr[i]<arr[minInd])
      {
        minInd=i;
      }
    }
  arr[maxInd]=arr[minInd]=0;
  
}
int main() {
  const int n=16;
  double arr[n];
  for(int i=0;i<n;i++)
    {
      cin >> arr[i];
    }
  func(arr,n);
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<"\t";
    }
}