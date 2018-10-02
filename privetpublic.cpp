//public,private,protected
//anything inside class is private by default//

#include<iostream>
using namespace std;

class rectangle{

int height;
int width;
public:
    int area();
    void set(int h,int w);

};//remember to put a semicolon here//
int rectangle::area() //declaration of a member function//
                      //:: indicates that area() is a member functn of class rectangle//
{
    return height*width;
}
void rectangle::set(int h,int w) //this function is void type as it doesnt return any value//
{                                //this is only for taking the value of height & width into h & w//
                                //because height and width is protected in this program//

height = h;
width = w;

}
int main()
{

rectangle obj; //an object(obj)of class rectangle has created here//
obj.set(5,6);
cout<< "AREA="<<obj.area()<<endl;
}
