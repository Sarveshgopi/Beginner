/*    Transpose of a Matrix in in-place    */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m,n;
  std::cin>>m>>n;
  int a[m+1][n+1],i,j,t;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      std::cin>>a[i][j];
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=i;j<n;j++)
    {
      t=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=t;
    }
  }
  std::cout<<"Matrix after transpose"<<"\n";
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      std::cout<<a[i][j]<<" ";
    }
    std::cout<<endl;
  }
  return 0;
}
