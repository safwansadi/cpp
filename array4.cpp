#include<iostream>
using namespace std;

void xyz(int theArray[],int sizeOfArray);

int main()
{
   int marks[5]={1,2,3,4,7};
   xyz(marks,5);

}
void xyz(int theArray[],int sizeOfArray)
{
    for(int i=0;i<=sizeOfArray;i++)
    {
       cout<<theArray[i]<<endl;

    };
}
