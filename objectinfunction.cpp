#include<iostream>
using namespace std;

class rectangle{

               int height;
               int width;
        public:
               int area(){return height*width;}
               void set(int h,int w){height = h;width =w;}

};
rectangle scan() //object used as a function's return type here//
{
    int h,w;
    cout<<"h = ";
    cin>>h;
    cout << "w = ";
    cin>>w;
    rectangle ob;
    ob.set(h,w);

    return ob;
}
void print(rectangle abc) //object used as a function's parameter here//
{
    cout<<abc.area()<<endl;

}
int main()
{
    rectangle obj;

    obj = scan(); // calling the functn scan() to input values & all the element of object obj are inside funtion scan //

    print(obj);  // to initialize the value of object obj,here obj (object) is used as a parameter; I used set(2,3) type of function to initialize value instead of this before //
}
