
#include<iostream>
using namespace std;
int sumArray(int x[][3],int rowsize);

int main()
{
  int abc[4][3]={
                 {1,2,3},
                 {1,5,6},
                 {1,8,9},
                 {1,11,12}

                };

int x;
cout<<sumArray(abc,4);

 cin.get();
 return 0;
}

int sumArray(int x[][3],int rowsize)
{   int result;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
          cout<<x[i][j]<<endl;
          result += x[i][j];

        }


    }
cout<<"result = ";
return result;

}
