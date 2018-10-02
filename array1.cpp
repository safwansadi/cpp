#include<iostream>
using namespace std;

int main()
{
 float avg;int i;int marks[5];int sum = 0;

 for(i=0;i<=4;i++)
 {
    cout<<"enter marks"<<endl;
    cin>>marks[i];

 }
 for(i=0;i<=4;i++)
 {
    sum = sum+marks[i];

 }
avg = sum/5;

cout<<"avg ="<<avg<<endl;





}
