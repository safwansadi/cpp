

#include<iostream>
using namespace std;

class rectangle{

            int height;
            int width;

public:
    void set(int a,int b){

    height = a;
    width = b;
              }
    int area(){
        return height* width;}
};
int main()
{
    rectangle obj[5];
    obj[0].set(1,2);
    obj[1].set(2,3);
    obj[2].set(3,4);
    obj[3].set(4,5);
    obj[4].set(5,6);

    for(int i=1;i<5;i++)
            cout<<i<< "=" <<obj[i].area()<<endl;




}
