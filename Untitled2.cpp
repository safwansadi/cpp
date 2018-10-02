
#include<iostream>
using namespace std;
int xyz(const int [][3],int);//rowsize);

int main()
{
  int x[4][3]={
                 {1,2,3},
                 {1,5,6},
                 {1,8,9},
                 {1,11,12}

                };
            cout<<abc(x,4);
            cin.get();
 //xyz(abc,4);
}
int xyz(const int x[][3],int rowsize)
{    int totalsum=0;
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<3;j++)
        {
          //cout<<x[i][j]<<endl;
          totalsum+=x[i][j];

        }


    }
    cout<<totalsum;
    return totalsum;
}
