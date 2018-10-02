//constructor & distructor//& constructor,distructor are those funtn who are always there inside the class by default//they are used for value initialisation//
#include<iostream>
using namespace std;

class rectangle{
        int height;
        int width;
        public:
            int area();
            rectangle(int h,int w);
            ~rectangle();
};
int rectangle::area()
{
    return height*width;

}
rectangle::rectangle(int h,int w)
{

        height = h;
        width = w;
        cout<<"constructor"<<endl;

}
rectangle::~rectangle()
{
    cout<< "destructor"<<endl;
}
int main()
{
    rectangle obj(5,6);
    cout << "AREA = "<<obj.area()<<endl;

}
