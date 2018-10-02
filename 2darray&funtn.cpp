#include<iostream>
using namespace std;

int total(const int [][3],int row);
int main()
{
    int a[4][3]={{2,3,5},{7,8,9},{8,9,7},{7,6,3}};


    cout<<total(a,4)<<endl;
    //cin.get();



}
int total(const int a[][3],int row)
{   int sum=0;
    int i,j;
    for(i=1;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
            sum+= a[i][j];
        }
        cout<<endl;
    }
    cout<<"sum = ";

    return sum;
}
