#include<iostream>
using namespace std;
void xyz(int x[][3],int rowsize);

int main()
{
  int abc[4][3]={
                 {1,2,3},
                 {1,5,6},
                 {1,8,9},
                 {1,11,12}

                };
 xyz(abc,4);
}
void xyz(int x[][3],int rowsize)
{
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<x[i][j]<<endl;//<<"col="<<*x[j]<<x[i][j]<<endl;
        }


    }







}
