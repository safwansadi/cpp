#include<iostream> //matrix addition
using namespace std;

int main()
{

    int sum[3][3];
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int mat2[3][3]={{1,2,1},{1,2,1},{1,2,1}};

    for(int i=0;i<3;i++)
    {
        //cout<<mat1[i]<<endl;
        for(int j=0;j<3;j++)
        {
            cout<<mat1[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int a=0;a<3;a++)
    {
        for(int b=0;b<3;b++)
            {
                cout<<mat2[a][b];
            }
            cout<<endl;
    }
    cout<<endl;
for(int c=0;c<3;c++)
{
    for(int d=0;d<3;d++)
    {
        sum[c][d]=mat1[c][d]+mat2[c][d];
        //cout<<sum[c][d];
    }
    //cout<<endl;
}
for(int c=0;c<3;c++)
{
    for(int d=0;d<3;d++)
    {
        cout<<sum[c][d]<<" ";
    }
    cout<<endl;
}

}
