#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column,temp,index1,index2;
    std::cin>>row>>column;
    int inputmatrix[row+1][column+1];
    for(index1=0;index1<row;index1++)
    {
        for(index2=0;index2<column;index2++)
        {
            std::cin>>inputmatrix[index1][index2];
        }
    }
    for(temp=1-column;temp<row;temp++)
    {
       for(index1=0;index1<row;index1++)
       {
          for(index2=0;index2<column;index2++)
          {
               if(index1-index2==temp)
               {
                    std::cout<<inputmatrix[index1][index2]<<" ";
               }
          }
         std::cout<<endl;
       }
    }
    return 0;
 }
